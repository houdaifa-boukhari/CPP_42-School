/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:28:29 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/19 17:01:06 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int n = 28;
	std::list<int> mylist;
	for (int i = 0; i < 15; i++)
		mylist.push_back(i * 2);
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	if (easyfind(mylist, n))
		std::cout << "Element found: " << n << std::endl;
	else
		std::cout << "Element not found" << std::endl;
	return (0);
}