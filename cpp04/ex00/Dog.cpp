#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &oth) : Animal(oth)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &oth)
{
    if(this != &oth)
        Animal::operator=(oth);
    std::cout << "Dog overload operator called" << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!" << std::endl;
}