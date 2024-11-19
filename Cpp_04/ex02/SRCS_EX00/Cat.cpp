/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:55:37 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/17 21:59:45 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES_EX00/Cat.hpp"

Cat::Cat() : brain(new Brain)
{
    this->type = "Cat";
    std::cout << "Cat Default Constructor is called\n";    
}

Cat::Cat(const Cat& cat)
{
    this->type = cat.type;
    this->brain = new Brain(*cat.brain);
    std::cout << "Cat Copy Constructor is called\n";
}

Cat& Cat::operator=(const Cat& cat)
{
    if (this != &cat)
    {
        this->type = cat.type;
        delete brain;
        this->brain = new Brain(*cat.brain);
    }
    std::cout << "Cat Copy Assignment Operator is caleed\n";
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow! (Cat Sound)\n";
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor is called\n";
}
