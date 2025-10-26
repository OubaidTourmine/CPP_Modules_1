#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &oth)
{
    for(int i = 0; i < 100; i++)
            ideas[i] = oth.ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &oth)
{
    if(this != &oth)
        for(int i = 0; i < 100; i++)
            ideas[i] = oth.ideas[i];
    std::cout << "Brain overload operator called" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}
