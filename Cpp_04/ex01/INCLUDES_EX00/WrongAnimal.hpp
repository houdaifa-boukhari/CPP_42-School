#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal& w_animal);
        WrongAnimal& operator=(const WrongAnimal& w_animal);
        ~WrongAnimal();    
        std::string getType() const;
        void makeSound() const;
};

# endif