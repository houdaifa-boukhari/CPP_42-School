/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:57:18 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/15 16:44:02 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream> 

typedef struct s_inf_file
{
    std::string name;
    std::string s1;
    std::string s2;
    std::string out;
    std::ifstream inFile;
    std::ofstream outFile;
}   t_file;

void    init_file(t_file *file, char **av);

#endif