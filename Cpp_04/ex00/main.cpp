/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:02:39 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/21 09:08:57 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./INCLUDES/Dog.hpp"
#include "./INCLUDES/Cat.hpp"
#include "./INCLUDES/WrongCat.hpp"
#include "./INCLUDES/WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal *k = new WrongCat();
    const WrongAnimal *l = new WrongAnimal();
    const WrongCat cat;
    const WrongAnimal w_animal;

    std::cout << "------------------------------------------------\n";
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;
    std::cout << "------------------------------------------------\n";
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    std::cout << "------------------------------------------------\n";
    k->makeSound();
    l->makeSound();
    std::cout << "------------------------------------------------\n";
    cat.makeSound();
    w_animal.makeSound();
    std::cout << "------------------------------------------------\n";
    delete meta;
    delete j;
    delete i;
    delete k;
    delete l;
    return (0);
}