#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &oth)
