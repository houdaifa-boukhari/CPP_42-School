/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:35:20 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/17 16:58:05 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(const Brain& brain);
        Brain& operator=(const Brain& brain);
        ~Brain();
};

#endif
