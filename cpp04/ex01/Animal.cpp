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
{
    type = oth.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &oth)
{
    if(this != &oth)
