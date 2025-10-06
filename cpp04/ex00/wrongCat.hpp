#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal
{
    public:
        wrongCat();
        wrongCat(wrongCat const &oth);
        wrongCat &operator=(wrongCat const &oth);
        ~wrongCat();
        void makeSound() const;
};


#endif