/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:11:12 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/18 09:16:21 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected :
        std::string type;
    public :
        AAnimal();
        AAnimal(const AAnimal& animal);
        AAnimal& operator=(const AAnimal& animal);
        virtual ~AAnimal();
        std::string getType() const;
        virtual void makeSound() const = 0;
};

# endif