#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *attributes;
    public:
        Dog();
        Dog(Dog const &oth);
        Dog &operator=(Dog const &oth);
        ~Dog();
        void makeSound() const;
        Brain* getBrain() const;
};


#endif