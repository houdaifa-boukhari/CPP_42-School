/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:39:27 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/30 16:35:20 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->name = "hel-bouk";
    this->grade = 1;
    std::cout << "Bureaucrat Constructer is Called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    this->name = other.name;
    this->grade = other.grade;
}

std::string  Bureaucrat::getName()
{
    return (name);
}

int  Bureaucrat::getGrade()
{
    return (grade);
}

void Bureaucrat::increment()
{
    grade -= 1;
}

void Bureaucrat::decrement()
{
    grade += 1;
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->grade = other.grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << this->name << "is Destroyed\n";
}