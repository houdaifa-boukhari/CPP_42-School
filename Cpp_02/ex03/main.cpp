/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:09:59 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/02 09:46:00 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    bool check;
    Point a(0, 2);
    Point b(1, 0);
    Point c(-1, -2);
    Point p(-0.5 , 0);

    check = bsp(a, b, c, p);
    if (check)
        std::cout << "\033[32m" << "Point inside in the triangle\n";
    else
        std::cout << "\033[31m" << "Point not inside in the triangle\n";
    return (0);
}