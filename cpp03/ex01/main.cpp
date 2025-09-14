#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    ScavTrap s1("Gatekeeper");
    ScavTrap s2("Intruder");

    s1.attack("Intruder");
    s2.takeDamage(20);

    s2.attack("Gatekeeper");
    s1.takeDamage(20);

    s1.guardGate();

    // Test energy depletion
    // for (int i = 0; i < 51; ++i)
    //     s1.attack("Intruder");

    s2.takeDamage(200);
    s2.attack("Gatekeeper");
    s2.guardGate();

    return 0;
}