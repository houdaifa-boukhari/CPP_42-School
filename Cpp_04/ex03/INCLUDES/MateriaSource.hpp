/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:46:30 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/19 20:46:12 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    private :
        AMateria *memory[4];
    public :
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        MateriaSource & operator=(const MateriaSource &other);
        ~MateriaSource();
};

#endif