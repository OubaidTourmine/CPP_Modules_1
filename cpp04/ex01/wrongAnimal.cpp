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
