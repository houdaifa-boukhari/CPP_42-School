/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:27:47 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/15 11:37:20 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = zombieHorde(10, "hel-bouk");
	if (!zombie)
		return (1);
	for (int i = 0; i < 10; i++)
		zombie[i].announce();
	delete[] zombie;
}