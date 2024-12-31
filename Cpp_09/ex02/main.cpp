/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:06:50 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/31 16:08:56 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::vector<int> arr;

	if (ac < 2)
		return (std::cerr << "Use ./PmergeMe Args\n", 1);
	else if (ac == 2)
		return (std::cerr << "At least you need two numbers and they are sorted.\n", 1);
	for (int i = 1; i < ac; i++)
	{
		std::string tmp = av[i];
		if (tmp.find_first_not_of(NUMBERS) != std::string::npos)
			return (std::cerr << "Error\n", 1);
		if (!tmp[0] || (tmp.find('+') != 0 && tmp.find('+') != std::string::npos)
			 || (tmp[0] == '+' && (!tmp[1] || !::isdigit(tmp[1]))))
			return (std::cerr << "Error\n", 1);
		arr.push_back(::atoi(av[i]));
	}
	MergeInsertSort(arr);
}