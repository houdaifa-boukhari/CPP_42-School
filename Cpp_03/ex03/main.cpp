/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:45:41 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/14 13:18:41 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main()
{
    DiamondTrap diamond("hel-bouk");
    std::cout << "--------------------------------------------\n";
    diamond.whoAmI();
    std::cout << "--------------------------------------------\n";
    std::cout << "HitPoints is:: " << diamond.getHitPoints() << std::endl;
    std::cout << "EnergyPoints is:: "<< diamond.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage is:: "<<diamond.getAttackDamage() << std::endl;
    std::cout << "--------------------------------------------\n";
    diamond.attack("aaskal");
    std::cout << "--------------------------------------------\n";
    diamond.guardGate();
    std::cout << "--------------------------------------------\n";
    diamond.highFivesGuys();
    std::cout << "--------------------------------------------\n";
    diamond.takeDamage(20);
    std::cout << "--------------------------------------------\n";
    diamond.beRepaired(10);
    std::cout << "--------------------------------------------\n";
    return (0);
}