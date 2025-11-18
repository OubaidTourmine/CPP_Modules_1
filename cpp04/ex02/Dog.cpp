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
        delete attributes;
        attributes = new Brain(*other.attributes);
    }
    return (*this);
}

Dog::~Dog()
{
    delete attributes;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return this->attributes;
}