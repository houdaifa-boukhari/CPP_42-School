/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:00:17 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/18 09:26:53 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "../INCLUDES/AAnimal.hpp"
#include "../INCLUDES/Brain.hpp"

class Dog : public AAnimal
{
    private :
        Brain *brain;
    public :
        Dog();
        Dog(const Dog& dog);
        Dog& operator=(const Dog& dog);
        void makeSound() const;
        ~Dog();
};

# endif