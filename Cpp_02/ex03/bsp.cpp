/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:41:35 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/02 09:36:59 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float abc_area;
    float abp_area;
    float bcp_area;
    float cap_area;
    float total_area;
    const double eps = 1e-6;

    //    |a.x a.y 1|
    // 1/2|b.x b.y 1|
    //    |c.x c.y 1|

    // abc_area = 0.5 * std::abs((a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)));
    abc_area = 0.5 * std::abs((a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y())));
    // abp_area = 0.5 * std::abs((a.x * (b.y - p.y) + b.x * (p.y - a.y) + p.x * (a.y - b.y)));
    abp_area = 0.5 * std::abs((a.get_x() * (b.get_y() - point.get_y()) + b.get_x() * (point.get_y() - a.get_y()) + point.get_x() * (a.get_y() - b.get_y())));
    // bcp_area = 0.5 * std::abs((b.x * (c.y - p.y) + c.x * (p.y - b.y) + p.x * (b.y - c.y )));
    bcp_area = 0.5 * std::abs((b.get_x() * (c.get_y() - point.get_y()) + c.get_x() * (point.get_y() - b.get_y()) + point.get_x() * (b.get_y() - c.get_y())));
    // cap_area = 0.5 * std::abs((c.x * (a.y - p.y) + a.x * (p.y - c.y) + p.x * (c.y - a.y)));
    cap_area = 0.5 * std::abs((c.get_x() * (a.get_y() - point.get_y()) + a.get_x() * (point.get_y() - c.get_y()) + point.get_x() * (c.get_y() - a.get_y())));
    total_area = abp_area + bcp_area + cap_area;
    if (std::abs(abc_area - total_area) < eps)
        return (true);
    return (false);
}