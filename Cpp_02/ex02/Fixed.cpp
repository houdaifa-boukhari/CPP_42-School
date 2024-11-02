/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:28:17 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/29 19:08:25 by hel-bouk         ###   ########.fr       */
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

void Fixed::operator=(const Fixed &org)
{
    this->fixed_point = org.fixed_point;
    std::cout << "copy assignment operator called\n";
}

bool Fixed::operator>(const Fixed &org) const
{
    if (this->getRawBits() > org.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<(const Fixed &org) const
{
    if (this->getRawBits() < org.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed &org) const
{
    if (this->getRawBits() >= org.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed &org) const
{
    if (this->getRawBits() <= org.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed &org) const
{
    if (this->getRawBits() == org.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed &org) const
{
    if (this->getRawBits() != org.getRawBits())
        return (true);
    return (false);
}

int Fixed::operator+(const Fixed &org) const
{
    return (this->fixed_point + org.fixed_point);
}

int Fixed::operator-(const Fixed &org) const
{
    return (this->fixed_point - org.fixed_point);
}

int Fixed::operator*(const Fixed &org) const
{
    return (this->fixed_point * org.fixed_point);
}

int Fixed::operator/(const Fixed &org) const
{
    if (org.fixed_point != 0)
        return (this->fixed_point / org.fixed_point);
    return (0);
}

Fixed& Fixed::operator++()
{
    fixed_point++;
    return (*this);
}

Fixed& Fixed::operator--()
{
    fixed_point--;
    return (*this);
}

Fixed& Fixed::operator++(int)
{
    Fixed  *a;
    a = (this);
    this->fixed_point++;
    return (*a);
}

Fixed& Fixed::operator--(int)
{
    Fixed a;
    this->fixed_point--;
    return (a);
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

Fixed& max(Fixed &org, Fixed &org1)
{
    if (org.getRawBits() > org1.getRawBits())
        return (org);
    return (org1);
}

Fixed& min(Fixed &org, Fixed &org1)
{
    if (org.getRawBits() < org1.getRawBits())
        return (org);
    return (org1);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}   
