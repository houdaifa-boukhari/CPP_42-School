/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:17:51 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/15 17:51:33 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (true);
	return (false);
}

bool ValidInput(std::string data)
{
	bool point = false;
	bool Float = false;
	if (data.length() == 1 && ft_isascii(data[0]))
		return (true);
	for (int i = 0; data[i]; i++)
	{
		if (data[i] == '.')
		{
			if (point)
				return (false);
			point = true;
		}
		else if (data[i] == 'f')
		{
			if (Float)
				return (false);
			Float = true;
		}
		else if (!std::isdigit(data[i]) && data[i] != '.' && data[i] != 'f')
			return (false);
	}
	return (true);
}

void ConvertToInt(std::string data)
{
	long long n = std::stoll(data.c_str());

	if (n > INT_MAX || n < INT_MIN)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << n << "\n";
	
}

void ConvertToChar(std::string data)
{
	long long  n;
	if (data.length() != 1)
		n = std::stoll(data.c_str());
	else
		n = std::atoi(data.c_str());
	if (data.length() == 1)
	{
		if (!std::isdigit(data[0]))
			std::cout << "char: '" << data[0] << "'"<< std::endl;
		else if (std::isprint(n))
			std::cout << "char: '" << static_cast<char>(n) << "'"<< std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else if (n > 255 || n < 0)
		std::cout << "char: impossible\n";
	else if (std::isprint(n))
		std::cout << "char: '" << static_cast<char>(n) << "'"<< std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::convert(std::string data)
{
	if (!ValidInput(data))
		throw ("Invalid Input");
	ConvertToChar(data);
	ConvertToInt(data);
}