/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 18:10:33 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/28 16:11:19 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP

#include <map>
#include <fstream>
#include <iostream>
#include <algorithm>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"
#define DEGITS_POINT "0123456789."

typedef struct Date
{
	std::string year;
	std::string mounth;
	std::string day;
	int _year;
	int _mounth;
	int _day;
}	Date;

bool ValuetIsValid(Date &date);
bool FormatIsValid(std::string In_date);
bool ValidePrice(std::string price, float &value);
std::map<std::string, float> ParceDataFile(std::ifstream &DataFile);
void ParceInputFile(std::ifstream &InFile, std::map<std::string, float> BtcDataBase);
void exchangeValue(std::map<std::string, float> &BtcDataBase, std::map<std::string, float> &btcInfo);

#endif