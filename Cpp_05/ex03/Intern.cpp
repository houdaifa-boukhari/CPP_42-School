/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:48:58 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/12 12:20:34 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

extern bool Debug;

Intern::Intern()
{
    if (Debug)
        std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
    if (Debug)
        std::cout << "Intern Copy constructor called" << std::endl;
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    if (Debug)
        std::cout << "Intern Assignation operator called" << std::endl;
    return (*this);
}

AForm * Intern::makeForm(std::string nameForm, std::string target)
{
    int i = 0;
    std::string possiblesJobs[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

    for (i = 0; i < 3; i++)
    {
        if (nameForm == possiblesJobs[i])
            break ;
    }
    switch (i)
    {
        case 0:
            std::cout << "Intern creates ShrubberyCreationForm\n";
            return (new ShrubberyCreationForm(target));
        case 1:
            std::cout << "Intern creates RobotomyRequestForm\n";
            return (new RobotomyRequestForm(target));
        case 2:
            std::cout << "Intern creates PresidentialPardonForm\n";
            return (new PresidentialPardonForm(target));
        default:
            std::cout << "Intern could not find the form: " << nameForm << std::endl;
            return (NULL);
    }
}

Intern::~Intern()
{
    if (Debug)
        std::cout << "Intern Destructor called" << std::endl;
}