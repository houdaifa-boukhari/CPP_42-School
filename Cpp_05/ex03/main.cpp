/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:22:42 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/12 12:43:20 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
   try
   {
		Intern RandomIntern;
		Bureaucrat b1("hel-bouk", 1);
		Form *p1 = RandomIntern.makeForm("ShrubberyCreationForm", "something");
		Form *p2 = RandomIntern.makeForm("RobotomyRequestForm", "something");
		Form *p3 = RandomIntern.makeForm("PresidentialPardonForm", "something");
		Form *p4 = RandomIntern.makeForm("non", "Unkown");
		std::cout << "---------------------\n";
		p1->beSigned(b1), p1->execute(b1);
		std::cout << "---------------------\n";
		p2->beSigned(b1), p2->execute(b1);
		std::cout << "---------------------\n";
		p3->beSigned(b1), p3->execute(b1);
		std::cout << "---------------------\n";
		delete p1, delete p2, delete p3, delete p4;
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
