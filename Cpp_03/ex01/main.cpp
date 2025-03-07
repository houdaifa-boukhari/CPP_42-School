/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:41:05 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/13 19:04:22 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("hel-bouk");
    ClapTrap clap("aaskal");

    scav.attack("aaskal");
    clap.attack("hel-bouk");
    scav.guardGate();
    scav.takeDamage(10);
    clap.takeDamage(10);
    scav.beRepaired(10);
    clap.beRepaired(10);
    return (0);
}