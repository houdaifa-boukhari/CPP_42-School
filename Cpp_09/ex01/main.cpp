/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:11:54 by hel-bouk          #+#    #+#             */
/*   Updated: 2025/01/02 22:13:23 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Use ./RPN argument\n";
		return (1);
	}
	try {
		manilpulatData(av[1]);
	}
	catch (const char *e)
	{
		std::cerr << e << "\n";
		return (1);
	}
	return (0);
}