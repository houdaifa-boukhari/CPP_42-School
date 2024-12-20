/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:43:09 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/20 21:13:44 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try {		
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "------------------------------\n";
		Span sp1(100000);
		std::vector<int> vec;
		::srand(std::clock());
		for (int i = 0; i < 100000; i++)
			vec.push_back(rand());
		sp1.addMultipleNumber(vec);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (const char *e)
	{
		std::cout << e << std::endl;
	}
	catch (const std::string &e)
	{
		std::cout << e << std::endl;
	}
	return (0);
}