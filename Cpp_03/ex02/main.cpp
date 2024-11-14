/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:28:00 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/13 21:31:21 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag("hel-bouk");
    ClapTrap clap("hel-bouk");
    frag.attack("hel-bouk");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.highFivesGuys();
    return (0);
}

