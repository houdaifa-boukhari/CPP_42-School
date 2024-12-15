/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:22:42 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/14 15:33:21 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
   try
   {
		Bureaucrat b1("hel-bouk", 1);
		ShrubberyCreationForm shrubbery("tree");
		std::cout << shrubbery;
		shrubbery.beSigned(b1);
		std::cout << "----------------\n";
		std::cout << shrubbery;
		std::cout << "----------------\n";
		b1.executeForm(shrubbery);
		std::cout << "-------------------------------\n";
		RobotomyRequestForm	robot("IJ_01");
		robot.beSigned(b1);
		b1.executeForm(robot);
		std::cout << "-------------------------------\n";
		PresidentialPardonForm president("someone");
		president.beSigned(b1);
		b1.executeForm(president);
		std::cout << "-------------::Finish::-----------------\n";
   }
   catch(const std::exception& e)
   {
	   std::cerr << "execption is : " << e.what() << std::endl;
   }
   catch(const char *e)
   {
	   std::cerr << "execption is : " << e << std::endl;
   }
   catch(const std::string &e)
   {
	   std::cerr << "execption is : " << e << std::endl;
   }
}
