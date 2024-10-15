/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:43:03 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/15 14:52:03 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w_name) : weapon(w_name) 
{
    name_human = name;
}

std::string HumanA::get_name() const
{
    return (name_human);
}

void HumanA::attack()
{
    std::cout << get_name() << " attacks with their " << weapon.getType() << std::endl;
}