/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:09:18 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/11 21:06:11 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private :
        const std::string name;
        bool  is_signed;
        const int GradeToSign;
        const int GradeToExec;
    public :
        AForm();
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        bool isSigned();
        AForm(const std::string name, bool  is_signed, const int GradeToSign, const int GradeToExec);
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        void beSigned(Bureaucrat military);
        ~AForm();
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
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &cout, AForm &other);

#endif