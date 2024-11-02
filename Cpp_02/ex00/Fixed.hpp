/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:28:09 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/28 13:04:13 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private :
        int fixed_point;
        static const int fractional_part = 8;
    public :
        Fixed();
        Fixed(const Fixed& org);    
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        void operator=(const Fixed &org);
        ~Fixed();
};



#endif