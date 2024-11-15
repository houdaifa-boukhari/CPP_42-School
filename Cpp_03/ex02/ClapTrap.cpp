/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:49:47 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/15 16:38:55 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "Unkown";
    this->hit_point = 10;
    this->energ_point = 10;
    this->attack_damage = 0;
    std::cout << "Default Claptrap constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hit_point = 10;
    this->energ_point = 10;
    this->attack_damage = 0;
    std::cout << "Assiment Claptrap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& org)
{
    this->name = org.name;
    this->hit_point = org.hit_point;
    this->energ_point = org.energ_point;
    this->attack_damage = org.attack_damage;
    std::cout << "Claptrap copy Concstructer called\n";
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energ_point <= 0 || this->hit_point  <= 0)
    {
        std::cout << this->name << " Can't attack , No Energy or Hit points left.\n";
        return ;
    }
    this->energ_point = -1;
    std::cout << "ClapTrap " << this->name << " attacks " << target
                  << ", causing " << this->attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_point <= 0 || this->energ_point <= 0)
    {
        std::cout << this->name << " Can't take damage , No Energy or Hit points left.\n";
        return ;
    }
    this->hit_point -= amount;
    std::cout << this->name << " takes " << amount << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_point <= 0 || this->energ_point <= 0)
    {
        std::cout << this->name << " Can't be repaired , No Energy or Hit points left.\n";
        return ;
    }
    this->energ_point--;
    if (this->hit_point + amount > 10)
        this->hit_point = 10;
    else
        this->hit_point += amount;
    std::cout << this->name << " has been repaired by " << amount << " points!\n";
}


ClapTrap& ClapTrap::operator=(const ClapTrap& org)
{
    if (this == &org)
    {
        this->name = org.name;
        this->hit_point = org.hit_point;
        this->energ_point = org.energ_point;
        this->attack_damage = org.attack_damage;
    }
    std::cout << "Claptrap assiment operator is clled\n";
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Deconstructor called\n";
}