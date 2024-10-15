/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:57:41 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/15 16:48:36 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void    init_file(t_file *file, char **av)
{
    file->name = av[1];
    file->s1 = av[2];
    file->s2 = av[3];
    file->out = (std::string)av[1] + ".replace";
    file->inFile.open(file->name);
    if (file->inFile)
        file->outFile.open(file->out);
    if (!file->inFile || !file->outFile)
    {
         std::cerr << "Unable to open file " << std::endl;
         exit(1);
    }
    std::cout << "name::" << file->name << std::endl;
    std::cout << "s2::" << file->s2 << std::endl;
    std::cout << "s2::" << file->s2 << std::endl;
    std::cout << "out::" << file->out << std::endl;
}