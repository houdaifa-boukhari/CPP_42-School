/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:36:23 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/19 21:41:03 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/Character.hpp"

Character::Character()
{
    this->name = "Unkown";
    this->list = NULL;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    std::cout << "Character Constructer Is Called\n";
}

Character::Character(std::string name)
{
    this->name = name;
    this->list = NULL;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    std::cout << "Character Assiment Constructer Is Called\n";
}

Character::Character(const Character &other)
{
    this->name = other.name;
    for (int i = 0; i < 4; i++)
    {
        delete this->inventory[i];
        this->inventory[i] = other.inventory[i]->clone();
    }
    std::cout << "Character Copy Constructer Is Called\n";
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        std::cout << "Wrong index\n";
    else
    {
        list->add_back(&list, inventory[idx]);
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || this->inventory[idx] == NULL)
        std::cout << "Wrong index or no Nothing in Slot\n";
    else
        this->inventory[idx]->use(target);
}

Character& Character::operator=(const Character &other)
{
    if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4; i++)
        {
            delete this->inventory[i];
            this->inventory[i] = other.inventory[i]->clone();
        }
    }
    std::cout << "Character Assiment Operator Is Called\n";
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        inventory[i] = NULL;   
    }
    for (t_list *ptr = list; list ; ptr = ptr->next)
        delete ptr, ptr = NULL;
    std::cout << "Character Deonstructer Is Called\n";
}
