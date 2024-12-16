/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:17:51 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/16 20:34:35 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (true);
	return (false);
}

void SpecialInput(std::string data)
{
	if (data == "nan" || data == "nanf")
		throw ("char: impossible\nint: impossible\n"\
					"float: nanf\ndouble: nan\n");
	if (data == "+inf" || data == "+inff")
		throw ("char: impossible\nint: impossible\n"\
					"float: +inff\ndouble: +inf\n");
	if (data == "-inf" || data == "-inff")
		throw ("char: impossible\nint: impossible\n"\
					"float: -inff\ndouble: -inf\n");
}
// ./convert "1.00000001f" 
bool ValidInput(std::string data)
{
	bool check[3] = {false};
	if (data.length() == 1 && ft_isascii(data[0]))
		return (true);
	for (int i = 0; data[i]; i++)
	{
		if (data[i] == '.' || data[i] == 'f' || data[i] == '-' || data[i] == '+')
		{
			if ((check[0] && data[i] == '.') || (check[1] && data[i] == 'f')
				|| (check[2] && data[i] == '-') || (check[2] && data[i] == '+'))
				return (false);
			if (data[i] == '.')
				check[0] = true;
			else if (data[i] == 'f')
			{
				if (data[i + 1] != '\0')
					return (false);
				check[1] = true;
			}
			else if (data[i] == '-' || data[i] == '+')
			{
				if (i != 0)
					return (false);
				check[2] = true;
			}
		}
		else if (!std::isdigit(data[i]))
			return (false);
	}
	return (true);
}

void ConvertToFloat(std::string data)
{
	float n = 0;
	long long nb = 0;
	try
	{
		if (!(data.length() == 1 && !std::isdigit(data[0])))
			n = std::atof(data.c_str());
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
	catch (const std::out_of_range& e)
    {
        std::cout << "float: impossible\n";
    }
}

void ConvertToInt(std::string data)
{
	long long n = 0;
	try 
	{
		if (!(data.length() == 1 && !std::isdigit(data[0])))
			n = std::stoll(data.c_str());
		if (n > INT_MAX || n < INT_MIN)
			std::cout << "int: impossible\n";
		else if (data.length() != 1 || std::isdigit(data[0]))
			std::cout << "int: " << n << std::endl;
		else
			std::cout << "int: " << static_cast<int>(data.c_str()[0]) << std::endl;
	}
	catch (const std::out_of_range& e)
    {
        std::cout << "int: impossible\n";
    }
}

void ConvertDouble(std::string data)
{
	double 	n = 0;
	long long nb = 0;
	try
	{
		if (!(data.length() == 1 && !std::isdigit(data[0])))
			n = std::atof(data.c_str());
		nb = n;
		if (data.length() != 1 || std::isdigit(data[0]))
		{
			if (std::isdigit(data[0]) && data.length() == 1)
				std::cout << "double: " << n << ".0" << std::endl;
			else
				std::cout << "double: " << n << (!(n - nb) ? ".0" : "") << std::endl;
		}
		else
			std::cout << "double: " << static_cast<int>(data.c_str()[0]) << ".0" << std::endl;
	}
	catch (const std::out_of_range& e)
    {
        std::cout << "double: impossible\n";
    }
}

void ConvertToChar(std::string data)
{
	try {
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
	catch (const std::out_of_range& e) {
        std::cout << "char: impossible\n";
    }
}

void ScalarConverter::convert(std::string data)
{
	SpecialInput(data);
	if (!ValidInput(data))
		throw (-1);
	ConvertToChar(data);
	ConvertToInt(data);
	ConvertToFloat(data);
	ConvertDouble(data);
}

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &org) {static_cast<void>(org);}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &org)
{
	static_cast<void>(org);
	return (*this);
}
ScalarConverter::~ScalarConverter() {}