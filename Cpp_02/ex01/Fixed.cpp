/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:34:03 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/02 13:30:19 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int nb)
{
    fixed_point = nb << 8;
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float nb)
{
    std::cout << "Flaot constructor called\n";
    fixed_point = int(roundf(nb * (1 << fractional_part)));
}

Fixed::Fixed(const Fixed& org)
{
    std::cout << "Copy constructor called\n";
    this->fixed_point = org.fixed_point;
}

std::ostream& operator<<(std::ostream &out, const Fixed &org)
{
    out << float(org.getRawBits()) / float(1 << org.get_fractional_part());
    return (out);
}

Fixed& Fixed::operator=(const Fixed &org)
{
    if (this != &org)
        this->fixed_point = org.fixed_point;
    std::cout << "Copy assignment operator called\n";
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
}

int Fixed::get_fractional_part() const
{
    return (fractional_part);
}

int Fixed::getRawBits( void ) const
{
    return (fixed_point);
}


float Fixed::toFloat( void ) const
{
    return (float(getRawBits()) / float(1 << get_fractional_part()));
}

int Fixed::toInt( void ) const
{
    return (fixed_point >> fractional_part);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}   
