/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:37:02 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/19 21:48:53 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../INCLUDES/Cure.hpp"

Cure::Cure() : AMateria("cure") 
{
    std::cout << "Cure Constructer Is Called\n";
}

Cure::Cure(const Cure &other)
{
    this->type = other.type;
    std::cout << "Cure Copy Constructer Is Called\n";
}

Cure& Cure::operator=(const Cure &other)
{
    if (this != &other)
        this->type = type;
    std::cout << "Cure Assiment Operator Is Called\n";
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure()
{
    std::cout << "Cure Deonstructer Is Called\n";
}
