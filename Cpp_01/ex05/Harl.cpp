/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:50:49 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/21 18:17:38 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[DEBUG] :: I love having extra bacon for "\
		"my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void )
{
	std::cout << "[INFO] :: I cannot believe adding extra bacon costs more money. You didn’t put "\
		"enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void )
{
	std::cout << "[WARNING] :: I think I deserve to have some extra bacon for free. I’ve been coming for "\
		"years whereas you started working here since last month.\n";
}

void Harl::error( void )
{
	std::cout <<  "[ERROR] :: This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level )
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
	}
}
