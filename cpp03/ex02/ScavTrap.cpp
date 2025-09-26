#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name; 
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &oth) : ClapTrap(oth)
{
    std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &oth)
{
