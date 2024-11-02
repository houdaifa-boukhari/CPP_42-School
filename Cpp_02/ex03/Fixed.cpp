/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:28:17 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/02 15:34:12 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
}

Fixed::Fixed(const int nb)
{
    fixed_point = nb << 8;
}

Fixed::Fixed(const float nb)
{
    fixed_point = int(roundf(nb * (1 << fractional_part)));
}

Fixed::Fixed(const Fixed& org)
{
    this->fixed_point = org.fixed_point;
}

Fixed& Fixed::operator=(const Fixed &org)
{
    if (this != &org)
        this->fixed_point = org.fixed_point;
    return (*this);
}

int Fixed::get_fractional_part() const
{
    return (fractional_part);
}

std::ostream& operator<<(std::ostream &out, const Fixed &org)
{
    out << float(org.getRawBits()) / float(1 << org.get_fractional_part());
    return (out);
}


float Fixed::toFloat( void ) const
{
    return (float(getRawBits()) / float(1 << get_fractional_part()));
}

int Fixed::toInt( void ) const
{
    return (fixed_point >> fractional_part);
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

float Fixed::operator+(const Fixed &org) const
{
    return (this->toFloat() + org.toFloat());
}

float Fixed::operator-(const Fixed &org) const
{
    return (this->toFloat() - org.toFloat());
}

float Fixed::operator*(const Fixed &org) const
{
    return (this->toFloat() * org.toFloat());
}

float Fixed::operator/(const Fixed &org) const
{
    if (org.fixed_point != 0)
        return (this->toFloat() / org.toFloat());
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

Fixed Fixed::operator++(int)
{
    Fixed a(*this);
    this->fixed_point++;
    return (a);
}

Fixed Fixed::operator--(int)
{
    Fixed a(*this);
    this->fixed_point--;
    return (a);
}

void Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
}

int Fixed::getRawBits( void ) const
{
    return (fixed_point);
}

Fixed& Fixed::max(Fixed &org, Fixed &org1)
{
    if (org.getRawBits() > org1.getRawBits())
        return (org);
    return (org1);
}

Fixed& Fixed::min(Fixed &org, Fixed &org1)
{
    if (org.getRawBits() < org1.getRawBits())
        return (org);
    return (org1);
}
const Fixed& Fixed::max(const Fixed &org, const Fixed &org1)
{
    if (org.getRawBits() > org1.getRawBits())
        return (org);
    return (org1);
}

const Fixed& Fixed::min(const Fixed &org, const Fixed &org1)
{
    if (org.getRawBits() < org1.getRawBits())
        return (org);
    return (org1);
}
Fixed::~Fixed()
{
}   
