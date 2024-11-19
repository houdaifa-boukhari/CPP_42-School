/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:55:39 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/18 09:26:55 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "../INCLUDES/AAnimal.hpp"
#include "../INCLUDES/Brain.hpp"

class Cat : public AAnimal
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