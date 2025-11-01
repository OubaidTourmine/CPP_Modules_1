#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal()
{
    type = "wrongAnimal";
    std::cout << "Default wrongAnimal constructor called" << std::endl;
}

wrongAnimal::wrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "wrongAnimal constructor called" << std::endl;
}

wrongAnimal::wrongAnimal(wrongAnimal const &oth)
{
    type = oth.type;
    std::cout << "wrongAnimal copy constructor called" << std::endl;
}

wrongAnimal &wrongAnimal::operator=(wrongAnimal const &oth)
{
    if(this != &oth)
        type = oth.type;
    std::cout << "wrongAnimal overload operator called" << std::endl;
    return *this;
}

wrongAnimal::~wrongAnimal()
{
    std::cout << "wrongAnimal destructor called" << std::endl;
}

void wrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound" << std::endl;
}