/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:05:40 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/14 13:06:26 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->hit_point = 100;
    this->energ_point = 100;
    this->attack_damage = 30;
    std::cout << "Fragtrap constructer is called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hit_point = 100;
    this->energ_point = 100;
    this->attack_damage = 30;
    std::cout << "Fragtrap Assiment is called\n";
}

FragTrap::FragTrap(const FragTrap &frag)
{
    this->name = frag.name;
    this->hit_point = frag.hit_point;
    this->energ_point = frag.energ_point;
    this->attack_damage = frag.attack_damage;
    std::cout << "Fragtrap copy constructer is called\n";
}

 FragTrap& FragTrap::operator=(FragTrap const & frag)
 {
    if (this == &frag)
        return (*this);
    this->name = frag.name;
    this->hit_point = frag.hit_point;
    this->energ_point = frag.energ_point;
    this->attack_damage = frag.attack_damage;
    std::cout << "Fragtrap copy Assiment is called\n";
    return (*this);
 }

 void FragTrap::highFivesGuys()
 {
    std::cout << "FragTrap " << this->name << " requests a high five! ✋\n";
 }

FragTrap::~FragTrap()
{
      std::cout << "FragTrap " << this->name << " is destroyed\n";
}