/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:41:05 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/11 17:56:13 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("hel-bouk");

    scav.attack("target");
    scav.guardGate();
    scav.takeDamage(10);
    scav.beRepaired(10);
    return (0);
}