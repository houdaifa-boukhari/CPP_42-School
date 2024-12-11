/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:09:18 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/11 19:01:06 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private :
        const std::string name;
        bool  is_signed;
        const int GradeToSign;
        const int GradeToExec;
    public :
        Form();
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        bool isSigned();
        Form(const std::string name, bool  is_signed, const int GradeToSign, const int GradeToExec);
        Form(const Form &other);
        Form &operator=(const Form &other);
        void beSigned(Bureaucrat military);
        ~Form();
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

std::ostream &operator<<(std::ostream &cout, Form &other);

#endif