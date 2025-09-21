#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &oth);
        ScavTrap &operator=(ScavTrap const &oth);
        ~ScavTrap();
        void guardGate(void);
};

#endif