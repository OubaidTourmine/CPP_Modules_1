#include "Dog.hpp"

Dog::Dog() : Animal ("Dog")
{
    attributes = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &oth) : Animal(oth)
{
    attributes = new Brain(*oth.attributes);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
