/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 21:37:43 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/11 21:39:59 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

extern bool Debug;

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
    : AForm("RobotomyRequestForm", false, 72, 45), target(target)
{
    if (Debug)
        std::cout << "RobotomyRequestForm Constructer is Called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other), target(other.target)
{
    if (Debug)
        std::cout << "RobotomyRequestForm Copy Constructer is Called\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    (void)other;
    if (Debug)
        std::cout << "RobotomyRequestForm Assignation Constructer is Called\n";
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeToExec())
        throw (AForm::GradeTooLowException());
    std::cout << "Drilling noise\n";
    if (rand() % 2)
        std::cout << target << " has been robotomized successfully\n";
    else
        std::cout << target << " has been failed to robotomized\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    if (Debug)
        std::cout << "RobotomyRequestForm Destructer is Called\n";
}