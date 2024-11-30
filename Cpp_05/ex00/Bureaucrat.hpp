/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:41:02 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/11/30 16:35:17 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private :
        std::string name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        std::string  getName();
        int  getGrade();
        void increment();
        void decrement();
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat &other);


#endif