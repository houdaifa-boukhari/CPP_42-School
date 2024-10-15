/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:41:29 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/15 11:18:30 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    _name = "Zombie";
}

Zombie::Zombie(std::string name)
{
    set_zombie_name(name);
}

std::string Zombie::get_zombie_name()
{
    return (_name);
}

void Zombie::set_zombie_name(std::string new_name)
{
    _name = new_name;
}

void Zombie::announce(void)
{
    std::cout << get_zombie_name() << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout << get_zombie_name() << ": Destroyed\n";
}