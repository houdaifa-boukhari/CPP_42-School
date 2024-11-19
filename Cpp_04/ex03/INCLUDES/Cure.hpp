/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:17:26 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/19 19:27:32 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        Cure(const Cure &other);
        Cure &operator=(const Cure &other);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Cure();
};

#endif