/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:31:33 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/18 09:49:24 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "Unkown";
    std::cout << "AAnimal Default Constructor is called\n";    
}

AAnimal::AAnimal(const AAnimal& animal)
{
    this->type = animal.type;
    std::cout << "AAnimal Copy Constructor is called\n";
}

AAnimal& AAnimal::operator=(const AAnimal& animal)
{
    if (this != &animal)
        this->type = animal.type;
    std::cout << "Animal Copy Assignment Operator is caleed\n";
    return (*this);
}

std::string AAnimal::getType() const
{
    return (this->type);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor is called\n";
}
