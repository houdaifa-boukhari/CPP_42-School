/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyList.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:13:44 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/19 19:22:37 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIST_HPP
#define MYLIST_HPP

#include "AMateria.hpp"

class AMateria;

typedef struct s_list
{   
    typedef struct s_list t_list;
    AMateria *ptr;
    t_list   *next;
    void    add_back(t_list **head, AMateria *ptr);
}       t_list;

#endif