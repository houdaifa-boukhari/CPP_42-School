/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:35:26 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/17 22:15:28 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ""; 
    std::cout << "Brain Default Constructor is called\n";  
}

Brain::Brain(const Brain& brain)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
    std::cout << "Brain Copy Constructor is called\n";
}

Brain& Brain::operator=(const Brain& brain)
{
    if (this != &brain) 
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i]; 
    }
    std::cout << "Brain Copy Assignment Operator is caleed\n";
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor is called\n";   
}
