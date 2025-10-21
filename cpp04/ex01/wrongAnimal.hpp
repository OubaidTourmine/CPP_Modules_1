#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class wrongAnimal
{
    protected:
        std::string type;
    public:
        wrongAnimal();
        wrongAnimal(wrongAnimal const &oth);
        wrongAnimal(std::string type);
        wrongAnimal &operator=(wrongAnimal const &oth);
        ~wrongAnimal();
        void makeSound() const;
};

#endif