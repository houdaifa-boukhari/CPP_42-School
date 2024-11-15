/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:46:59 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/15 16:16:09 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
    this->hit_point = 100;
    this->energ_point = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap Default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hit_point = 100;
    this->energ_point = 50;
    this->attack_damage = 20;
    std::cout << "Assiment ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(ScavTrap const &org) : ClapTrap(org) {std::cout << "ScavTrap copy Concstructer called\n";}

ScavTrap &ScavTrap::operator=(ScavTrap const &org)
{
    if (this == &org)
        return (*this);
    this->name = org.name;
    this->hit_point = org.hit_point;
    this->energ_point = org.energ_point;
    this->attack_damage = org.attack_damage;
    std::cout << "ScavTrap Assiment operator called\n";
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energ_point <= 0 || this->hit_point  <= 0)
    {
        std::cout << this->name << " Can't attack , No Energy or Hit points left.\n";
        return ;
    }
    this->energ_point = -1;
    std::cout << "ScavTrap " << this->name << " attacks " << target
                  << ", causing " << this->attack_damage << " points of damage!\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " is destroyed\n";
}
