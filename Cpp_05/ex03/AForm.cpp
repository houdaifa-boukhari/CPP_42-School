/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:22:31 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/12 10:44:37 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

extern bool Debug;

AForm::AForm()
    : name("Unkown") , is_signed(false) , GradeToSign(75), GradeToExec(75)
{
    if (Debug)
        std::cout << "Form Constructer is Called\n";
}

AForm::AForm(const std::string name,  bool sign, const int GradeToSign, const int GradeToExec)
    : name(name) , is_signed(sign) , GradeToSign(GradeToSign), GradeToExec(GradeToExec)
{
    if (GradeToExec > 150 || GradeToSign > 150)
        throw (AForm::GradeTooLowException());
    else if (GradeToExec < 1|| GradeToSign < 1)
        throw (AForm::GradeTooHighException());
    if (Debug)
        std::cout << "Form Assiment Constructer is Called\n";
}

AForm::AForm(const AForm &other)
 : name(other.name) , is_signed(other.is_signed) , GradeToSign(other.GradeToSign), GradeToExec(other.GradeToExec)
{
    if (Debug)
        std::cout << "Form Copy Assiment Constructer is Called\n";
}
void AForm::beSigned(Bureaucrat military)
{
    if (GradeToSign < military.getGrade())
        throw (AForm::GradeTooLowException());
    this->is_signed = true; 
}

std::string AForm::getName() const
{
    return (name);
}

bool AForm::isSigned() const
{
    return (is_signed);
}

AForm & AForm::operator=(const AForm &other)
{
    (void)other;
    if (Debug)
        std::cout << "AForm Assiment Operator Constructer is Called\n";
    return (*this);
}

 int AForm::getGradeToSign() const
 {
    return (this->GradeToSign);
 }

int AForm::getGradeToExec() const
{
    return (this->GradeToExec);
}

std::ostream &operator<<(std::ostream &cout, AForm &other)
{
    cout << "Name is : " <<  other.getName() << std::endl;
    cout << "Signed : " << (other.isSigned() ? "True\n" : "False\n");
    cout << "GradeToSign : " << other.getGradeToSign() << std::endl;
    cout << "GradeToExec : " << other.getGradeToExec() << std::endl;
    return (cout);
}

AForm::~AForm()
{
    if (Debug)
        std::cout << "AForm " << this->name << "is Destroyed\n";
}