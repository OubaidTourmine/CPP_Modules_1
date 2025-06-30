#include "Zombie.hpp"

int main ()
{
    Zombie *zombie;
    int N = 10;
    zombie = zombieHorde(N, "Foo");
    for (int i = 0; i < N; i++)
    {
        zombie[i].announce();
    }

    delete[] zombie;
}