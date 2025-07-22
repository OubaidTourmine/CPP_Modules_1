#include "file.hpp"

int test (std::string filename, std::string s1, std::string s2)
{
    std::ifstream file(filename.c_str());
    char c;
    if(!file.get(c))
    {
        std::cout << "error in " << filename << "\n";
        return (1);
    }
    file.unget();
    if(s1.empty())
    {
        std::cout << "s1 cannot be empty." << "\n";
        return (1);
    }
