/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 21:13:41 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/12 11:09:04 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

extern bool Debug;

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: AForm("Shrubbery", false, 145, 137), target(target)
{
	if (Debug)
		std::cout << "ShrubberyCreationForm Constructer is Called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm(other), target(other.target)
{
	if (Debug)
		std::cout << "ShrubberyCreationForm Copy Constructer is Called\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	if (Debug)
		std::cout << "ShrubberyCreationForm Assignation Constructer is Called\n";
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
	std::string fileName = target + "_shrubbery";
	if (executor.getGrade() > getGradeToExec())
		throw (AForm::GradeTooLowException());
	else if (!this->isSigned())
		throw (this->getName() + " Is Not Signed");
	std::ofstream outFile(fileName.c_str());
	if (!outFile.is_open())
		throw ("File is not open");
	
	outFile << "            e88o\n";
	outFile << "          ccee88oo\n";
    outFile << "  C8O8O8Q8PoOb o8oo\n";
    outFile << " dOB69QO8PdUOpugoO9bD\n";
    outFile << "CgggbU8OU qOp qOdoUOdcb\n";
    outFile << "    6OuU  /p u gcoUodpP\n";
    outFile << "      \\\\//  /douUP\n";
    outFile << "        \\\\////\n";
    outFile << "         |||/\\\n";
    outFile << "         |||\\/\n";
    outFile << "         |||||\n";
    outFile << "   .....//||||\\....\n";
	outFile.close();
	std::cout << "Created " << fileName << " Successfully\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	if (Debug)
		std::cout << "ShrubberyCreationForm Destructer is Called\n";
}
