/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:22:51 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/09 18:47:53 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	valide_phone_number(std::string str)
{
	int i;

	i = 0;
	if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

std::string get_input(std::string str)
{
	std::string input;

	std::cout << str;
	getline(std::cin, input);
	if (std::cin.eof())
    		exit(1);
	if (P_NUMBER == str)
	{
		while (!valide_phone_number(input) || input.empty())
		{
			if (!valide_phone_number(input))
				std::cout << "wrong format, please enter valid phone number\n";
			if (input.empty())
				std::cout << "try egain, you can't pass empyt input\n";
			std::cout << P_NUMBER;
			std::getline(std::cin, input);
			if (std::cin.eof())
    			exit(1);
		}
		return (input);
	}
	while (input.empty())
	{	
		std::cout << "try egain, you can't pass empyt input\n";
		std::cout << str;
		getline(std::cin, input);
		if (std::cin.eof())
    		exit(1);
	}
	return (input);
}

int	main()
{
	int	i;
	Phonebook book;
	std::string	input;

	i = 0;
	std::cout << "Enter a command (ADD, SEARCH, EXIT): \n";
	while (true)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
    		break;
		if (input == "ADD")
		{
			if (i == 8)
				i = 0;
			book.set_Phonebook_Fname(i, get_input(F_NAME));
			book.set_Phonebook_Lname(i, get_input(L_NAME));
			book.set_Phonebook_Nname(i, get_input(N_NAME));
			book.set_Phonebook_PH(i, get_input(P_NUMBER));
			book.set_Phonebook_DS(i, get_input(D_SECRET));
			i++;
		}
		else if (input == "SEARCH")
		{
			std::cout << "     index|" << "first name|" << "  lastname|" << "  nickname\n";
			std::cout << "-------------------------------------------\n";
			book.print_all_contacts();
		}
		else if (input == "EXIT")
			break ;
	}
}
