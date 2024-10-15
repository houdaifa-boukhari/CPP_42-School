/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:20:04 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/15 11:37:25 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *new_Zombie;

    if (N <= 0)
    {
        std::cout << "choose valid number of Zombie\n";
        return (NULL);
    }
    new_Zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        new_Zombie[i].set_zombie_name(name);
    return (new_Zombie);
}