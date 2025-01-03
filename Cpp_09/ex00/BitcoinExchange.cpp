/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 11:25:05 by hel-bouk          #+#    #+#             */
/*   Updated: 2025/01/03 10:13:12 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void exchangeValue(std::map<std::string, float> &BtcDataBase, std::map<std::string, float> &btcInfo)
{
	std::map<std::string, float>::iterator it, it1 = btcInfo.begin(), it2, it3;
	it = BtcDataBase.find(it1->first);
	it3 = ++BtcDataBase.begin();
	it2 = ++it1 , --it1;
	if (it != BtcDataBase.end())
		std::cout << it1->first << " => " << it1->second << " = " << it1->second * BtcDataBase[it1->first] << "\n";
	else
	{
		if (strcmp(it1->first.c_str(), it3->first.c_str()) < 0)
		{
			std::cerr << RED << "In " << it1->first << " bitcoin not created\n" << RESET;
			return ;
		}
		it = --BtcDataBase.lower_bound(it1->first);
		std::cout << it1->first << " => " << it1->second << " = " << it1->second * BtcDataBase[it->first] << "\n";
	}
}

std::map<std::string, float> ParceDataFile(std::ifstream &DataFile)
{
	float price = 0;
	std::string line;
	std::string date;
	std::map<std::string, float> BtcDataBase;

	while (getline(DataFile, line))
	{
		if (line.length() > 11)
		{
			date = line.substr(0, 10);
			price = atof(line.substr(11).c_str());
		}
		BtcDataBase[date] = price;
	}
	DataFile.close();
	if (BtcDataBase.empty())
		throw ("Data Base is empty");
	return (BtcDataBase);
}

bool ValidePrice(std::string price, float &value)
{
	std::string delim = " ";
	size_t start = price.find_first_not_of(delim);
    size_t end = price.find_last_not_of(delim);
    price = (start == std::string::npos) ? "" : price.substr(start);
    price = (end == std::string::npos) ? "" : price.substr(0, end);
	if (price.find_first_not_of(DEGITS_POINT) != std::string::npos)
 		return (false);
	delim = price;
	end = delim.find(".");
	if (end != std::string::npos)
	{
		if (!delim[end + 1] || delim.substr(end + 1).find(".") != std::string::npos)
			return (false);
	}
	value = atof(price.c_str());
	if (value > 1000)
		return (false);
	return (true);
}

bool UpdatKeyValue(std::string line, std::string &key, std::string &value)
{
	size_t pos = line.find("|");
	if (pos == std::string::npos)
		return (false);
	key = line.substr(0, pos);
	value = line.substr(pos + 1);
	return (true);
}

void ParceInputFile(std::ifstream &InFile, std::map<std::string, float> BtcDataBase)
{
	float price = 0;
	std::string line;
	std::map<std::string, float> btcInfo;
	
	while (getline(InFile, line))
	{
        std::string key, value;
		if (UpdatKeyValue(line, key, value))
		{
			if (!FormatIsValid(key) || !ValidePrice(value, price))
				std::cerr << RED << "Bad Input :: " << line << RESET << std::endl;
			else
			{
            	btcInfo[key.substr(0, 10)] = price;
				exchangeValue(BtcDataBase, btcInfo);
			}
		}
        else
            std::cerr << RED << "Bad Input :: " << line << RESET<< std::endl;
		btcInfo.clear();
	}
	InFile.close();
}

bool FormatIsValid(std::string In_date)
{
	Date date;
	std::string tmp = In_date;
	size_t pos = tmp.find("-");
	if (pos == std::string::npos)
		return (false);
	date.year = tmp.substr(0, pos);
	tmp = tmp.substr(pos + 1);
	pos = tmp.find("-");
	if (pos == std::string::npos)
		return (false);
	date.mounth = tmp.substr(0, pos);
	tmp = tmp.substr(pos + 1);
	if (pos == std::string::npos)
		return (false);
	date.day = tmp; 
	if (date.year.length() != 4 || date.mounth.length() != 2
		|| date.day.length() != 3 || date.day[2] != ' ' || !ValuetIsValid(date))
		return (false);
	return (true);
}
