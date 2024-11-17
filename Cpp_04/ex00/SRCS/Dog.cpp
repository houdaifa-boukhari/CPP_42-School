/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:00:16 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/17 16:31:47 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES_EX00/Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Default Constructor is called\n";    
}

Dog::Dog(const Dog& dog)
{
    this->type = dog.type;
    std::cout << "Dog Copy Constructor is called\n";
}

Dog& Dog::operator=(const Dog& dog)
{
    if (this != &dog)
        this->type = dog.type;
    std::cout << "Dog Copy Assignment Operator is caleed\n";
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof! (Dog Sound)\n";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor is called\n";
}
