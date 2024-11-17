/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:31:33 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/17 16:31:47 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES_EX00/Animal.hpp"

Animal::Animal()
{
    type = "Unkown";
    std::cout << "Animal Default Constructor is called\n";    
}

Animal::Animal(const Animal& animal)
{
    this->type = animal.type;
    std::cout << "Animal Copy Constructor is called\n";
}

Animal& Animal::operator=(const Animal& animal)
{
    if (this != &animal)
        this->type = animal.type;
    std::cout << "Animal Copy Assignment Operator is caleed\n";
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "pshhhhhhhh! (Unkwon Animal Sound)\n";
}

Animal::~Animal()
{
    std::cout << "Animal Destructor is called\n";
}
