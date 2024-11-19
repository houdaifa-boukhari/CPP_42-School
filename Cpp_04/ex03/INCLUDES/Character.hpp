/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:42:36 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/19 21:13:49 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "MyList.hpp"

class Ice;
class Cure ;
class AMateria;
typedef struct s_list t_list;
 
class ICharacter
{
    public:
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
        virtual ~ICharacter() {}
};

class Character : public ICharacter
{
    private :
        std::string name;
        AMateria *inventory[4];
        t_list  *list;
    public :
        Character();
        Character(std::string name);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        Character(const Character & other);
        Character &operator=(const Character &other);
        ~Character();
};

#endif