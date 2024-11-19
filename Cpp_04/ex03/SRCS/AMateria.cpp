/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:37:02 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/19 20:27:18 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../INCLUDES/AMateria.hpp"

AMateria::AMateria()
{
    this->type = "Unkown";
    std::cout << "AMateria Constructer Is Called\n";
}

AMateria::AMateria(std::string const &type) : type(type)
{ 
    std::cout << "AMateria Assiment Constructer Is Called\n";
}

AMateria::AMateria(const AMateria &other)
{
    this->type = other.type;
    std::cout << "AMateria Copy Constructer Is Called\n";
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

AMateria& AMateria::operator=(const AMateria &other)
{
    if (this != &other)
        this->type = other.type;
    std::cout << "AMateria Assiment Operator Is Called\n";
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria Deonstructer Is Called\n";
}
