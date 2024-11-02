/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:28:17 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/02 10:40:15 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& org)
{
    this->fixed_point = org.fixed_point;
    std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed &org)
{
    if (this != &org)
        this->fixed_point = org.fixed_point;
    std::cout << "copy assignment operator called\n";
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (fixed_point);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}   
