#include "file.hpp"

int main (int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "enter 'filename', 's1', 's2'." << "\n";
        return (0);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    test(filename, s1, s2);
    return (0);
}
