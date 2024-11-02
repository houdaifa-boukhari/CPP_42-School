/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:02:53 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/01 18:58:18 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include  "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &org);
        void operator=(const Point &org);
        Fixed get_x() const;
        Fixed get_y() const;
        ~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif