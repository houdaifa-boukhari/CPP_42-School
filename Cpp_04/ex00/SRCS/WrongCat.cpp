/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:23:26 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/21 09:14:58 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..//INCLUDES/WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default Constructor is called\n";    
}

WrongCat::WrongCat(const WrongCat& w_cat)
{
    this->type = w_cat.type;
    std::cout << "WrongCat Copy Constructor is called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& w_cat)
{
    if (this != &w_cat)
        this->type = w_cat.type;
    std::cout << "WrongCat Copy Assignment Operator is caleed\n";
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Meow! (WrongCat Sound)\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor is called\n";
}
