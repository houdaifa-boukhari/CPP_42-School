/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:51:00 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/17 09:12:35 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1;
    ClapTrap clap2("Clap2");
    ClapTrap clap3(clap2);
    ClapTrap clap4;
    clap4 = clap2; 

    clap1.attack("Clap2");
    clap4.beRepaired(10);
    clap2.takeDamage(5);
    clap3.takeDamage(5);
    return 0;
}