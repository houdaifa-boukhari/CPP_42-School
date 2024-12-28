/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 18:10:21 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/28 15:47:11 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool ValuetIsValid(Date &date)
{
	// MOUNTH           J	F	M	A	M	J	J	A	S	O	N	D
	int MounthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	date._year = ::atoi(date.year.c_str());
	date._mounth = ::atoi(date.mounth.c_str());
	date._day = ::atoi(date.day.c_str());

	// chech is leap year
	if ((date._year % 4 == 0 && date._year % 100 != 0) || (date._year % 400 == 0))
		MounthDays[1] = 29;
	if (date._mounth < 0 || date._mounth > 12
		|| date._day <= 0 || date._day > MounthDays[date._mounth - 1])
		return (false);
	return (true);
}

void parsing_data(char *inp)
{
	std::ifstream InFile(inp) , DataFile("data.csv");
	if (!InFile.is_open() || !DataFile.is_open())
		throw ("Can't Open InputFile Or Data Base");
	ParceInputFile(InFile, ParceDataFile(DataFile));
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Use ./btc Inputfile" << std::endl;
		return (-1);
	}
	try {
		parsing_data(av[1]);
	}
	catch (const char *e)
	{
		std::cout << e << "\n";
	}
	return (0);
} 