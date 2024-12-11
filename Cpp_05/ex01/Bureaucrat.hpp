/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:41:02 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/11 18:43:38 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private :
        const std::string name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        std::string  getName() const;
        int  getGrade();
        void increment();
        void decrement();
        void signForm(Form form);
        void setGarde(int new_grade);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();
        class GradeTooHighException : public std::exception
        {
            public :
                const char* what() const throw() {return ("Grade is too high!");}
        };
        class GradeTooLowException : public std::exception
        {
            public :
                const char* what() const throw() {return ("Grade is too low!");}
        };
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat &other);


#endif