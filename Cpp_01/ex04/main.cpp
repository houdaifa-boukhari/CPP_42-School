/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:56:49 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/15 16:13:15 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
    t_file file;

    if (ac != 4)
    {
        std::cerr << "Usage: ./sed filename s1 s2\n";
        return (1);
    }
    init_file(&file, av);
}