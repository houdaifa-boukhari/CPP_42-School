/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:43:31 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/16 12:04:13 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->name = "Unkown";
    this->hit_point = FragTrap::hit_point;
    this->attack_damage = FragTrap::attack_damage;
    this->energ_point = ScavTrap::energ_point;
    std::cout << "DiamondTrap constructer is called\n";
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->ClapTrap::name = name + "_clap_name";
    this->DiamondTrap::name = name;
    this->energ_point = energ_point;
    this->hit_point = hit_point;
    this->attack_damage = attack_damage + 10;
    std::cout << "DiamondTrap Assiment is called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond)
{
    this->name = diamond.name;
    this->hit_point = diamond.hit_point;
    this->attack_damage = diamond.attack_damage;
    this->energ_point = diamond.energ_point;
    std::cout << "DiamondTrap copy assiment is called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamond)
{
    if (this != &diamond)
    {
        this->name = diamond.name;
        this->hit_point = diamond.hit_point;
        this->attack_damage = diamond.attack_damage;
        this->energ_point = diamond.energ_point;
    }
    std::cout << "DiamondTrap operator assiment is called\n";
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is:: " << this->DiamondTrap::name << std::endl;
    std::cout << "ClapTrap name is:: " << this->ClapTrap::name << std::endl; 
}

int DiamondTrap::getHitPoints() const
{
    return (hit_point);
}

int DiamondTrap::getEnergyPoints() const
{
    return (energ_point);
}

int DiamondTrap::getAttackDamage() const
{
    return (attack_damage);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " is destroyed\n";
}
