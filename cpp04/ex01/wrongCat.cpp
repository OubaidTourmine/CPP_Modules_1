#include "wrongCat.hpp"

wrongCat::wrongCat() : wrongAnimal("wrongCat")
{
    std::cout << "wrongCat constructor called" << std::endl;
}

wrongCat::wrongCat(const wrongCat &oth) : wrongAnimal(oth)
{
    std::cout << "wrongCat copy constructor called" << std::endl;
}

wrongCat &wrongCat::operator=(wrongCat const &oth)
{
    if(this != &oth)
        wrongAnimal::operator=(oth);
    std::cout << "wrongCat overload operator called" << std::endl;
    return *this;
}

wrongCat::~wrongCat()
{
    std::cout << "wrongCat destructor called" << std::endl;
}

void wrongCat::makeSound() const
{
	std::cout << "Wrong Cat sound!" << std::endl;
}