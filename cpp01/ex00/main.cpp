#include "Zombie.hpp"

int main ()
{
    Zombie *zombie;
    zombie = newZombie("Foo");
    zombie->announce();
    randomChump("ALO");
    delete zombie;
}