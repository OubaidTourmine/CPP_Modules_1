#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap f1("Fraggy");
    f1.attack("target");
    f1.takeDamage(42);
    f1.beRepaired(10);
    f1.highFivesGuys();

    {
        FragTrap f2("HighFiver");
        f2.highFivesGuys();
    }


    return 0;
}