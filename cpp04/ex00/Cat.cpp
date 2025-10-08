#include "Cat.hpp"

Cat::Cat() : Animal ("cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &oth) : Animal(oth)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &oth)
{
    if(this != &oth)
        Animal::operator=(oth);
    std::cout << "Cat overload operator called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow!" << std::endl;
}