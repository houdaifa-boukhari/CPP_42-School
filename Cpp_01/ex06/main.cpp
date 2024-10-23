/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:28:18 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/21 18:31:21 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl a;

    if (ac != 2)
        return (std::cout << "Use  ./harlFilter level\n", 1);
    a.complain(av[1]);
    return (0);
}