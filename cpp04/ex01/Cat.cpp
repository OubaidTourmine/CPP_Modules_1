#include "Cat.hpp"

Cat::Cat() : Animal ("Cat")
{
    attributes = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &oth) : Animal(oth)
{
    attributes = new Brain(*oth.attributes);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete attributes;
        attributes = new Brain(*other.attributes);
    }
    return (*this);
}

Cat::~Cat()
