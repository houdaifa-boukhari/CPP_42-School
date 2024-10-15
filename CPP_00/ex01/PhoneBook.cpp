/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:02:43 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/09 18:12:25 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    Phonebook::set_Phonebook_Fname(int idx, std::string str)
{
	contacts[idx].set_first_name(str);
}

void    Phonebook::set_Phonebook_Lname(int idx, std::string str)
{
	contacts[idx].set_last_name(str);
}

void    Phonebook::set_Phonebook_Nname(int idx, std::string str)
{
	contacts[idx].set_nickname(str);
}

void    Phonebook::set_Phonebook_PH(int idx, std::string str)
{
	contacts[idx].set_phone_number(str);
}
void    Phonebook::set_Phonebook_DS(int idx, std::string str)
{
	contacts[idx].set_dark_secret(str);
}

void    Phonebook::print_spesify_inf(int idx)
{
	std::cout << "First name: " << contacts[idx].get_first_name() << std::endl;
	std::cout << "Last name: " << contacts[idx].get_last_name() << std::endl;
	std::cout << "Nick name: " << contacts[idx].get_nickname() << std::endl;
	std::cout << "Phone number: " << contacts[idx].get_phone_number() << std::endl;
	std::cout << "dark secret: " << contacts[idx].get_dark_secret() << std::endl;
}

std::string modifie_bfr_print(std::string str)
{
	if (str.length() >= 10)
	{
		str.resize(str.size() - (str.length() - 10));
		str[9] = '.';
	}
	else if (str.length() < 10)
		str = std::string(10 - str.length(), ' ') + str;
	return (str);
}
		
void Phonebook::print_all_contacts()
{
	int tmp;
	int count;
	std::string s_tmp;

	tmp = -1;
	count = 0;
	for (int i = 0; i < 8; i++)
	{
		if (!contacts[i].get_first_name().empty())
		{   
			std::cout << "         " << i << "|";
			s_tmp = modifie_bfr_print(contacts[i].get_first_name());
			std::cout << s_tmp << "|";
			s_tmp = modifie_bfr_print(contacts[i].get_last_name());
			std::cout << s_tmp << "|";
			s_tmp = modifie_bfr_print(contacts[i].get_nickname());
			std::cout << s_tmp << std::endl;
			std::cout << "-------------------------------------------\n";
			count++;
		}
	}
	if (count != 0)
	{
		while (!(tmp >= 0 && tmp <= count))
		{
			std::cout << "choose index for displaye more information: ";
			std::cin >> tmp;
			if (!(tmp >= 0 && tmp <= count))
				std::cout << "Contact not found please try Egain\n";
		}
		print_spesify_inf(tmp);
	}
}
