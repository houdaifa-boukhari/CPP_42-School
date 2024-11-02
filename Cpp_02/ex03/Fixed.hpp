/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:28:09 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/02 15:35:00 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
    private :
        int fixed_point;
        static const int fractional_part = 8;
    public :
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed& org);
        int toInt( void ) const;
        float toFloat( void ) const;
        int get_fractional_part() const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed& operator=(const Fixed &org);
        bool operator>(const Fixed &org) const;
        bool operator<(const Fixed &org) const;
        bool operator>=(const Fixed &org) const;
        bool operator<=(const Fixed &org) const;
        bool operator==(const Fixed &org) const;
        bool operator!=(const Fixed &org) const;
        float operator+(const Fixed &org) const;
        float operator-(const Fixed &org) const;
        float operator*(const Fixed &org) const;
        float operator/(const Fixed &org) const;
        Fixed&  operator++();
        Fixed&  operator--();
        Fixed  operator++(int) ;
        Fixed  operator--(int);
        static Fixed& max(Fixed &org, Fixed &org1);
        static Fixed& min(Fixed &org, Fixed &org1);
        static const Fixed& min(const Fixed &org, const Fixed &org1);
        static const Fixed& max(const Fixed &org, const Fixed &org1);
        ~Fixed();
};

std::ostream& operator<<(std::ostream &out, const Fixed &org);



#endif