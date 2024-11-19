/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:40:06 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/19 21:44:16 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./INCLUDES/AMateria.hpp"
#include "./INCLUDES/Character.hpp"
#include "./INCLUDES/MateriaSource.hpp"
#include "./INCLUDES/Ice.hpp"
#include "./INCLUDES/Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << "-----------------------------------------\n";
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    std::cout << "-----------------------------------------\n";
    me->equip(tmp);
    std::cout << "-----------------------------------------\n";
    tmp = src->createMateria("cure");
    std::cout << "-----------------------------------------\n";
    printf("{%p}\n", tmp);
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    std::cout << "-----------------------------------------\n";
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << "-----------------------------------------\n";
    delete bob;
    delete me;
    delete src;
    return 0;
}
