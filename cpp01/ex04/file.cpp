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
    std::string text;
    std::string line;
    while (std::getline(file, line))
    {
        text = text + line;
        if (!file.eof())
            text += '\n';
    }
    std::string res;
    size_t position = 0;
    size_t found;
    while (position < text.length())
    {
        found = text.find(s1 , position);
        if (found == std::string::npos)
        {
            res += text.substr(position);
            break;
        }
        res += text.substr(position, found - position);
        res += s2;
        position = found + s1.length();
    }
    std::string output_filename = filename + ".replace";
    std::ofstream output_file(output_filename.c_str());
    if (!output_file.is_open())
    {
        std::cout << "cannot create " << output_filename << "\n";
        return (1);
    }
    output_file << res;
    std::cout << output_filename << " is created" << "\n";
    return (0);
}
