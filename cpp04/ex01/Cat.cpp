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
