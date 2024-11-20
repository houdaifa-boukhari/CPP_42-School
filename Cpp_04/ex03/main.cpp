/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:40:06 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/20 09:59:11 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./INCLUDES/AMateria.hpp"
#include "./INCLUDES/Character.hpp"
#include "./INCLUDES/MateriaSource.hpp"
#include "./INCLUDES/Ice.hpp"
#include "./INCLUDES/Cure.hpp"

void ll()
{
    system("leaks -q Interface");
}
// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     std::cout << "-----------------------------------------\n";
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     std::cout << "-----------------------------------------\n";
//     me->equip(tmp);
//     std::cout << "-----------------------------------------\n";
//     tmp = src->createMateria("cure");
//     std::cout << "-----------------------------------------\n";
//     printf("{%p}\n", tmp);
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     std::cout << "-----------------------------------------\n";
//     me->use(0, *bob);
//     me->use(1, *bob);
//     std::cout << "-----------------------------------------\n";
//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }

void customTests(void)
{
	std::cout << "-----------------------Custom Test START-----------------------" << std::endl << std::endl;
	MateriaSource* materiaMaker = new MateriaSource();
	ICharacter* bob = new Character("bob");
	MateriaSource stackMaker;
	Character ned("Ned");
    std::cout << "---------------------------------------\n";
	materiaMaker->learnMateria(new Ice());
	materiaMaker->learnMateria(new Cure());
	materiaMaker->learnMateria(new Ice());
	materiaMaker->learnMateria(new Cure());
	materiaMaker->learnMateria(new Cure()); 
    std::cout << "---------------------------------------\n";
	stackMaker.learnMateria(new Ice());
	stackMaker.learnMateria(new Cure());
	stackMaker.learnMateria(new Ice());
	stackMaker.learnMateria(new Cure());
	stackMaker.learnMateria(new Cure());
    std::cout << "---------------------------------------\n";
	bob->equip(materiaMaker->createMateria("non")); 
	bob->equip(materiaMaker->createMateria("ice"));
	bob->equip(materiaMaker->createMateria("cure"));
	bob->equip(materiaMaker->createMateria("ice"));
	bob->equip(materiaMaker->createMateria("cure"));
	bob->equip(materiaMaker->createMateria("ice")); 
    std::cout << "---------------------------------------\n";
	ned.equip(stackMaker.createMateria("non")); 
	ned.equip(stackMaker.createMateria("ice"));
	ned.equip(stackMaker.createMateria("cure"));
	ned.equip(stackMaker.createMateria("ice"));
	ned.equip(stackMaker.createMateria("cure"));
	ned.equip(stackMaker.createMateria("ice")); 
    std::cout << "---------------------------------------\n";
	bob->use(-1, ned);
	bob->use(0, ned);
	bob->use(1, ned);
	bob->use(2, ned);
	bob->use(3, ned);
	bob->use(4, ned);
    std::cout << "---------------------------------------\n";
	ned.use(-1, *bob);
	ned.use(0, *bob);
	ned.use(1, *bob);
	ned.use(2, *bob);
	ned.use(3, *bob);
	ned.use(4, *bob);
    std::cout << "---------------------------------------\n";
	bob->unequip(-1);
	bob->unequip(0);
	bob->unequip(1);
	bob->unequip(2);
	bob->unequip(3);
	bob->unequip(4);
    std::cout << "---------------------------------------\n";
	ned.unequip(-1); 
	ned.unequip(0);
	ned.unequip(1);
	ned.unequip(2);
	ned.unequip(3);
	ned.unequip(4);
	std::cout << "---------------------------------------\n";
	delete bob;
	delete materiaMaker;
	std::cout << "-----------------------Custom Test END-----------------------" << std::endl;
}

void subjectTest(void)
{
	std::cout << "-----------------------Subject Test START-----------------------" << std::endl << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	std::cout << "-----------------------Subject Test END-----------------------" << std::endl;;
}

int main(void)
{
    // atexit(ll);
	subjectTest();
    std::cout << std::endl;
	customTests();
	return 0;
}
