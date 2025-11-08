#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *attributes;
    public:
        Cat();
        Cat(Cat const &oth);
        Cat &operator=(Cat const &oth);
        ~Cat();
        void makeSound() const;
        Brain* getBrain() const;
};


#endif