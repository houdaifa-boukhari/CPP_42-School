/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:22:31 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/11 19:04:09 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

extern bool Debug;

Form::Form()
    : name("Unkown") , is_signed(false) , GradeToSign(75), GradeToExec(75)
{
    if (Debug)
        std::cout << "Form Constructer is Called\n";
}

Form::Form(const std::string name,  bool sign, const int GradeToSign, const int GradeToExec)
    : name(name) , is_signed(sign) , GradeToSign(GradeToSign), GradeToExec(GradeToExec)
{
    if (GradeToExec > 150 || GradeToSign > 150)
        throw (Form::GradeTooLowException());
    else if (GradeToExec < 1|| GradeToSign < 1)
        throw (Form::GradeTooHighException());
    if (Debug)
        std::cout << "Form Assiment Constructer is Called\n";
}

Form::Form(const Form &other)
 : name(other.name) , is_signed(other.is_signed) , GradeToSign(other.GradeToSign), GradeToExec(other.GradeToExec)
{
    if (Debug)
        std::cout << "Form Copy Assiment Constructer is Called\n";
}
void Form::beSigned(Bureaucrat military)
{
    if (GradeToSign < military.getGrade())
        throw (Form::GradeTooLowException());
    this->is_signed = true; 
}

std::string Form::getName() const
{
    return (name);
}

bool Form::isSigned()
{
    return (is_signed);
}

Form & Form::operator=(const Form &other)
{
    (void)other;
    if (Debug)
        std::cout << "Form Assiment Operator Constructer is Called\n";
    return (*this);
}

 int Form::getGradeToSign() const
 {
    return (this->GradeToSign);
 }

int Form::getGradeToExec() const
{
    return (this->GradeToExec);
}

std::ostream &operator<<(std::ostream &cout, Form &other)
{
    cout << "Name is : " <<  other.getName() << std::endl;
    cout << "Signed : " << (other.isSigned() ? "True\n" : "False\n");
    cout << "GradeToSign : " << other.getGradeToSign() << std::endl;
    cout << "GradeToExec : " << other.getGradeToExec() << std::endl;
    return (cout);
}

Form::~Form()
{
    if (Debug)
        std::cout << "Form " << this->name << "is Destroyed\n";
}