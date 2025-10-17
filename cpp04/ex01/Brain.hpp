#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"

class Brain
{
    private :
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &oth);
        Brain &operator=(Brain const &oth);
        ~Brain();
        void setIdea(int index, std::string idea);
};


#endif