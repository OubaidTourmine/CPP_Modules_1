#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void setName(std::string name);
        const std::string getName() const;  
        void announce();
    };
    void randomChump( std::string name );
    Zombie* newZombie(std::string name);

#endif