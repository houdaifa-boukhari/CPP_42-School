/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:39:27 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/14 15:18:15 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

bool Debug = true;

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

std::ostream &operator<<(std::ostream &cout, Bureaucrat &other)
{
    cout << other.getName() << ", bureaucrat grade " << other.getGrade() << ".\n";
    return (cout);
}

Bureaucrat::~Bureaucrat()
{
    if (Debug)
        std::cout << "Bureaucrat " << this->name << " is Destroyed\n";
}