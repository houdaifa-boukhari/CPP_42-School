/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:39:27 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/11 18:58:36 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

bool Debug = false;

Bureaucrat::Bureaucrat() : name("hel-bouk")
{
    this->grade = 1;
    if (Debug)
        std::cout << "Bureaucrat Constructer is Called\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    else if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    this->grade = grade;
    if (Debug)
        std::cout << "Bureaucrat Assiment Constructer is Called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    this->grade = other.grade;
    if (Debug)
        std::cout << "Bureaucrat Copy Assiment Constructer is Called\n";
}

std::string  Bureaucrat::getName() const
{
    return (name);
}

int  Bureaucrat::getGrade()
{
    return (grade);
}

void Bureaucrat::setGarde(int new_grade)
{
    if (new_grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    else if (new_grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    this->grade = new_grade;
}

void Bureaucrat::increment()
{
    if ((grade - 1) > 150)
        throw (Bureaucrat::GradeTooLowException());
    else if ((grade - 1) < 1)
        throw (Bureaucrat::GradeTooHighException());
    grade -= 1;
}

void Bureaucrat::decrement()
{
    if ((grade + 1) > 150)
        throw (Bureaucrat::GradeTooLowException());
    else if ((grade + 1) < 1)
        throw (Bureaucrat::GradeTooHighException());
    grade += 1;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        this->grade = other.grade;
    if (Debug)
        std::cout << "Bureaucrat Assiment Operator Constructer is Called\n";
    return (*this);
}

void Bureaucrat::signForm(Form form)
{
    if (form.isSigned())
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    else
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because Not have a permetion"<< std::endl;
}

std::ostream &operator<<(std::ostream &cout, Bureaucrat &other)
{
    cout << other.getName() << ", bureaucrat grade " << other.getGrade() << ".\n";
    return (cout);
}

Bureaucrat::~Bureaucrat()
{
    if (Debug)
        std::cout << "Bureaucrat " << this->name << "is Destroyed\n";
}