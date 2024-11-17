/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:24:51 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/17 16:31:47 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES_EX00/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "Unkown(Wrong Animal)";
    std::cout << "WrongAnimal Default Constructor is called\n";    
}

WrongAnimal::WrongAnimal(const WrongAnimal& w_animal)
{
    this->type = w_animal.type;
    std::cout << "WrongAnimal Copy Constructor is called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& w_animal)
{
    if (this != &w_animal)
        this->type = w_animal.type;
    std::cout << "WrongAnimal Copy Assignment Operator is caleed\n";
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "pshhhhh! (Unkown W_Animal Sound)\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor is called\n";
}
