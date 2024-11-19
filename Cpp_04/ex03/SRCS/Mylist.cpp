/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mylist.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:17:31 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/19 21:14:35 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/MyList.hpp"

void    t_list::add_back(t_list **head, AMateria *ptr_m)
{
    t_list *ptr;
    t_list *new_node;

    new_node = new t_list;
    new_node->ptr = ptr_m;
    new_node->next = NULL;
    if (!*head)
    {
        *head = new_node;
        return;   
    }
    ptr = *head;
    while (ptr->next)
        ptr = ptr->next;
    ptr->next = new_node;
}
