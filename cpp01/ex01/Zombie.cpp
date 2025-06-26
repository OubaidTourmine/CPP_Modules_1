#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::~Zombie()
{
    std::cout << "destructor called for " << this->name << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

const std::string Zombie::getName() const
{
    return this->name;
}