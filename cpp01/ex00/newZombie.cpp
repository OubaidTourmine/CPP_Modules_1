#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* zombie1 = new Zombie();
    zombie1->setName(name);
    return zombie1;
}