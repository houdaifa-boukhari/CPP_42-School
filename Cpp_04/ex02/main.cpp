/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:02:39 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/18 09:49:10 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./INCLUDES_EX00/Dog.hpp"
#include "./INCLUDES_EX00/Cat.hpp"
#include "./INCLUDES_EX00/WrongCat.hpp"
#include "./INCLUDES_EX00/WrongAnimal.hpp"

void    ll()
{
    system("leaks -q Animal");
}

int main()
{
    atexit(ll);
    {
        AAnimal *animals[6];

        for (int i = 0; i < 6; i++)
        {
            if (((i + 1) % 2) != 0)
                animals[i] = new Dog;
            else
                animals[i] = new Cat;
            std::cout << "---------------------------\n";
        }
        for (int i = 0; i < 6; i++)
            animals[i]->makeSound();
        std::cout << "---------------------------\n";
        for (int i = 0; i < 6; i++)
        {
            delete animals[i];
            std::cout << "---------------------------\n";
        }
    }
    return (0);
}