/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:58:07 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/15 11:15:53 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie1("hel-bouk");
    Zombie *zombie2;

    zombie1.announce();
    zombie2 = newZombie("aaskal");
    zombie2->announce();
    randomChump("tlasfar");
    delete zombie2;
}
