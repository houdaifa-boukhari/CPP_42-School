/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:17:51 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/15 22:49:31 by hel-bouk         ###   ########.fr       */
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

void ConvertToFloat(std::string data)
{
	double 	n = 0;
	long long nb;

	if (!(data.length() == 1 && !std::isdigit(data[0])))
		n = std::stof(data.c_str());
	nb = n;
	if (data.length() != 1 || std::isdigit(data[0]))
	{
		if (std::isdigit(data[0]) && data.length() == 1)
			std::cout << "float: " << n << ".0f" << std::endl;
		else
			std::cout << "float: " << n << (!(n - nb) ? ".0" : "") << "f" << std::endl;
	}
	else
		std::cout << "float: " << static_cast<int>(data.c_str()[0]) << ".0f" << std::endl;
}

void ConvertToInt(std::string data)
{
	long long n = 0;

	if (!(data.length() == 1 && !std::isdigit(data[0])))
		n = std::stoll(data.c_str());
	if (n > INT_MAX || n < INT_MIN)
		std::cout << "int: impossible\n";
	else if (data.length() != 1 || std::isdigit(data[0]))
		std::cout << "int: " << n << std::endl;
	else
		std::cout << "int: " << static_cast<int>(data.c_str()[0]) << std::endl;
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
	ConvertToFloat(data);
}