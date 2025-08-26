#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(10),energyPoints(10), attackDamage(0)
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10),energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &oth)
{
    this->name = oth.name;
    this->hitPoints = oth.hitPoints;
    this->energyPoints = oth.energyPoints;
    this->attackDamage = oth.attackDamage;
    std::cout << "ClapTrap " << name << " copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &oth)
{
    if(this != &oth)
    {
        name = oth.name;
        hitPoints = oth.hitPoints;
        energyPoints = oth.energyPoints;
        attackDamage = oth.attackDamage;
    }
    std::cout << "copy assignement overload called" << std::endl;
    return (*this);
}

