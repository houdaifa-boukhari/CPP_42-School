/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:55:39 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/17 21:52:52 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "../INCLUDES/Brain.hpp"

class Cat : public Animal
{
    private :
        Brain *brain;
    public :
        Cat();
        Cat(const Cat& cat);
        Cat& operator=(const Cat& cat);
        void makeSound() const;
        ~Cat();
};

# endif