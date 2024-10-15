#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

#define F_NAME "Enter First name : "
#define L_NAME "Enter Last name : "
#define N_NAME "Enter Nickname : "
#define P_NUMBER "Enter Phone number : "
#define D_SECRET "Enter Dark secret : "

class Phonebook
{
    private :
        Contact contacts[8];
    public :
        void print_spesify_inf(int idx);
        void print_all_contacts();
        void set_Phonebook_Fname(int idx, std::string str);
        void set_Phonebook_Lname(int idx, std::string str);
        void set_Phonebook_Nname(int idx, std::string str);
        void set_Phonebook_PH(int idx, std::string str);
        void set_Phonebook_DS(int idx, std::string str);
} ;

# endif