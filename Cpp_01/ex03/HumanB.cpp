/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:43:03 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/15 15:09:51 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    weapon = NULL;
}

HumanB::HumanB(std::string name)
{
    name_human = name;
    weapon = NULL;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
    weapon = &new_weapon;
}

std::string HumanB::get_name() const
{
    return (name_human);
}

void HumanB::attack()
{
    if (weapon)
        std::cout << get_name() << " attacks with their " << (*weapon).getType() << std::endl;
    else
        std::cout << get_name() << " can't attack without a weapon\n";
}