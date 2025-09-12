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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << "destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack, not enough energy or hit points" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ",causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    std::cout << "ClapTrap " << name << " lost " << amount << " Hit Points" << std::endl;
    if(hitPoints < 0)
        hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot be repaired, not enough energy or hit points" << std::endl;
        return ;
    }
    hitPoints += amount;
    energyPoints--;
    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
}