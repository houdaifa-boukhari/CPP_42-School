/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:19:26 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/02 15:28:03 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed w(12.01f), e(5.5f);
    Fixed const b(Fixed(5.05f) * Fixed(2));
    
    std::cout << a << std::endl; 
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;
    std::cout  << (bool)(a > b) << std::endl;
    std::cout  << (bool)(a < b) << std::endl;
     std::cout  << (bool)(a >= b) << std::endl;
    std::cout  << (bool)(a <= b) << std::endl;
    std::cout  << (bool)(a != b) << std::endl;
    std::cout  << (bool)(a == b) << std::endl;
    return (0);
}