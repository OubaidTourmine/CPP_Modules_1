#include "Harl.hpp"

void Harl::complain( std::string level )
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*actions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for(int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*actions[i])();
            return;
        }
    }
    return ;
}

int main ()
{
    Harl harl;
    harl.complain("WARNI21NG");
    return 0;
}