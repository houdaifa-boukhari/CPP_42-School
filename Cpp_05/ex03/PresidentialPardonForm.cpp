/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 21:46:09 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/12 11:19:52 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

extern bool Debug;

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
    : AForm("PresidentialPardonForm", false, 25, 5), target(target)
{
    if (Debug)
        std::cout << "PresidentialPardonForm Constructer is Called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
    : AForm(other), target(other.target)
{
    if (Debug)
        std::cout << "PresidentialPardonForm Copy Constructer is Called\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    (void)other;
    if (Debug)
        std::cout << "PresidentialPardonForm Assignation Constructer is Called\n";
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeToExec())
        throw (AForm::GradeTooLowException());
    else if (!this->isSigned())
		throw (this->getName() + " Is Not Signed");
    std::cout << target << " has been pardoned by Zafod Beeblebrox\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    if (Debug)
        std::cout << "PresidentialPardonForm Destructer is Called\n";
}