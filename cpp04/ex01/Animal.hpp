#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const &oth);
        Animal(std::string type);
        std::string getType() const;
        void SetType(const std::string &name);
        Animal &operator=(Animal const &oth);
        virtual ~Animal();
        virtual void makeSound() const;
};

#endif