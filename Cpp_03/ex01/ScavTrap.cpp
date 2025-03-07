/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:46:59 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/16 10:17:18 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "Unkown";
    this->hit_point = 100;
    this->energ_point = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap Default constructor called\n";
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hit_point = 100;
    this->energ_point = 50;
    this->attack_damage = 20;
    std::cout << "Assiment ScavTrap " << this->name <<  " constructor called\n";
}

ScavTrap::ScavTrap(ScavTrap const &org) : ClapTrap(org)
{
    std::cout << "ScavTrap copy Concstructer called\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &org)
{
    if (this != &org)
    {
        this->name = org.name;
        this->hit_point = org.hit_point;
        this->energ_point = org.energ_point;
        this->attack_damage = org.attack_damage;
    }
    std::cout << "ScavTrap Assiment operator called\n";
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energ_point <= 0 || this->hit_point  <= 0)
        std::cout << this->name << " Can't attack , No Energy or Hit points left.\n";
    else
    {
        this->energ_point--;
        std::cout << "ScavTrap " << this->name << " attacks " << target
            << ", causing " << this->attack_damage << " points of damage!\n";
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " is destroyed\n";
}
