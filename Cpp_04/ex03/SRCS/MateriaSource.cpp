/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:43:30 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/19 21:46:56 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->memory[i] = NULL;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    bool check = false;
    
    for (int i = 0; i < 4; i++)
    {
        if (this->memory[i] == NULL)
        {
            this->memory[i] = materia;
            check = true;
            break ;
        }
    }
    if (!check)
        std::cout << "MateriaSource is full of memory. Can't add a new AMateria model.\n"; 
    else
        std::cout << "add a new AMateria model in MateriaSource\n";
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->memory[i])
        {
            if (this->memory[i]->getType() == type)
            {
                std::cout << "Created " << type << " sucsufely\n";
                return (this->memory[i]->clone());
            }
        }
    }
    std::cout << "Failed created\n";
    return (0);
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    for (int i = 0; i < 4; i++)
        this->memory[i] = other.memory[i]->clone();
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {       
        for (int i = 0; i < 4; i++)
        {
            delete this->memory[i];
            this->memory[i] = other.memory[i]->clone();
        }
    }
    return (*this);
}

void	AMateria::use(ICharacter& target)
{
    (void)target;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->memory[i];
}
