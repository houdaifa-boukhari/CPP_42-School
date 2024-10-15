/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:35:54 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/15 12:55:51 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon() {}

Weapon::Weapon(std::string name)
{
    type = name;
}

std::string Weapon::getType() const
{
    return (type);
}

void     Weapon::setType(std::string new_type)
{
    type = new_type;
}