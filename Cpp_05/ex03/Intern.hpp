/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:37:47 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/12 12:25:55 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
# define Intern_HPP

#include <iostream>

class AForm;
typedef AForm Form;

class Intern
{
    public :
        Intern();
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);
        Form *makeForm(std::string nameForm, std::string target);
        ~Intern();
};

#endif
