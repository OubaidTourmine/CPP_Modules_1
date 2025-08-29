#include "ClapTrap.hpp"


int main( void )
{
    ClapTrap a("Clappy");
	ClapTrap b("Trappy");
	a.attack("Trappy");
	b.takeDamage(2);
	b.beRepaired(1);
	b.attack("Clappy");
	a.takeDamage(2);
	for (int i = 0; i < 5; ++i)
		a.attack("Trappy");
	a.beRepaired(5);
	a.takeDamage(2);
	a.attack("Trappy");
	a.beRepaired(2);
    return 0;
}