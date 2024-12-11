/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:22:42 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/11 19:04:52 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
   try
   {
		Form form("BNI_C", false, 45, 10);
		Bureaucrat b1("hel-bouk", 41);
		form.beSigned(b1);
		b1.signForm(form);
		std::cout << "-----------------\n";
		std::cout << b1;
		std::cout << "-----------------\n";
		std::cout << form;
   }
   catch(const std::exception& e)
   {
	   std::cerr << "execption is : " << e.what() << std::endl;
   }
}
