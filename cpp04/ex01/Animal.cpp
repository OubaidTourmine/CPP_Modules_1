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
        type = oth.type;
    std::cout << "Animal overload operator called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
void Animal::SetType(const std::string &name)
{
	this->type = name;
}