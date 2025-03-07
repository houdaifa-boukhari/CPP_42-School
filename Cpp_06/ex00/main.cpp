/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:09:40 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/16 20:34:15 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Use ./convert String" << std::endl;
		return (1);
	}
	try {
		ScalarConverter::convert(av[1]);
	}
	catch (const char *e)
	{
			std::cout << e;
	}
	catch (...)
	{
		std::cout << "char: impossible\nint: impossible\n"\
					"float: impossible\ndouble: impossible\n"; 
	}
	return (0);
}