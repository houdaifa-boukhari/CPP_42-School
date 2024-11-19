/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:37:02 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/19 19:27:36 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../INCLUDES/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice Constructer Is Called\n";
}

Ice::Ice(const Ice &other)
{
    this->type = other.type;
    std::cout << "Ice Copy Constructer Is Called\n";
}

Ice& Ice::operator=(const Ice &other)
{
    if (this != &other)
        this->type = type;
    std::cout << "Ice Assiment Operator Is Called\n";
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice()
{
    std::cout << "Ice Deonstructer Is Called\n";
}
