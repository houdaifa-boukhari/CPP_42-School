/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:38:21 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/02 09:36:12 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed()) , y(Fixed()) {}

Point::Point(const float x, const float y) : x(Fixed(x)) , y(Fixed(y)) {}

Point::Point(const Point &org) : x(org.x), y(org.y) {}

void Point::operator=(const Point &org) { (void)org; }

Fixed Point::get_x() const
{
    return (x);    
}

Fixed Point::get_y() const
{
    return (y);    
}

Point::~Point()
{
}



