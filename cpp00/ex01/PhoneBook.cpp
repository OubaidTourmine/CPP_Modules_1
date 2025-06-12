#include  "PhoneBook.hpp"

PhoneBook::PhoneBook(){index = 0;}

void PhoneBook::add(Contact c)
{
    contacts[index % 8] = c;
    index++;

}

bool alphanum(std::string input)
{
    for(size_t i = 0; i < input.length(); i++) {
        if(!std::isalpha(input[i]) && !std::isdigit(input[i]) && input[i] != ' ') return false;
    }
    return true;
}

void addContact(PhoneBook *phoneBook)
{
    Contact contact;
    std::string input;

    std::cout << "Enter your First Name : ";
    std::getline(std::cin, input);
    if(std::cin.eof())
            exit(0);
    if(input == "" || !alphanum(input))
    {
        std::cout << "Invalid input !" << std::endl;
        return ;
    }
    contact.setFirstName(input);

    std::cout << "Enter your Last Name : ";
    std::getline(std::cin, input);
    if(std::cin.eof())
            exit(0);
    if(input == "" || !alphanum(input))
    {
        std::cout << "Invalid input !" << std::endl;
        return ;
    }
    contact.setLastName(input);

    std::cout << "Enter your Nick Name : ";
    std::getline(std::cin, input);
    if(std::cin.eof())
            exit(0);
    if(input == "" || !alphanum(input))
    {
        std::cout << "Invalid input !" << std::endl;
        return ;
    }
    contact.setNickName(input);

    std::cout << "Enter your Phone number : ";
    std::getline(std::cin, input);
    if(std::cin.eof())
            exit(0);
    if(input == "" || !alphanum(input))
    {
        std::cout << "Invalid input !" << std::endl;
        return ;
    }
    for(size_t i = 0; i < input.length(); i++)
    {
        if(!isdigit(input[i])) 
        {
            std::cout << "WARNING : Phone number must be all digits." << std::endl;
            return ;
        }
    }
    contact.setNumber(input);

    std::cout << "Enter your Dark Secret : ";
    std::getline(std::cin, input);
    if(std::cin.eof())
            exit(0);
    if(input == "" || !alphanum(input))
    {
        std::cout << "Invalid input !" << std::endl;
        return ;
    }
    contact.setDarkSecret(input);

    phoneBook->add(contact);
}

std::string tenChar(const std::string s)
{
    if (s.size() <= 10)
        return s;
    return s.substr(0, 9) + ".";
}

void *getContact(Contact *contacts, int index)
{
    std::string input;
    int nbr;
    std::cout << "Enter Index : ";
    std::getline(std::cin, input);
    if(std::cin.eof())
            exit(0);
    if(input == "")
        return NULL;
    for(size_t i = 0; i < input.length(); i++)
    {
        if(!isdigit(input[i]))
        {
            std::cout << "Enter valid index" << std::endl;
            return NULL;
        }
    }
    nbr = std::atoi(input.c_str());
    if((nbr >= 0 && nbr <= 7) && index > nbr)
    {
        std::cout << "Index : " << nbr << std::endl;
        std::cout << "First Name : " << contacts[nbr].getFirstName() << std::endl;
        std::cout << "Last Name : " << contacts[nbr].getLastName() << std::endl;
        std::cout << "Nick Name : " << contacts[nbr].getNickName() << std::endl;
        std::cout << "Number : " << contacts[nbr].getNumber() << std::endl;
        std::cout << "Secret : " << contacts[nbr].getDarkSecret() << std::endl;
    }
    else
        std::cout << "Invalid Index." << std::endl ;
    return NULL;
}

void PhoneBook::searchContact()
{
    if(index == 0)
    {
        std::cout << "No contacts saved !" << std::endl;
        return ;
    }
    std::cout << std::right << std::setw(10) << "Index" << " | "
    << std::right << std::setw(10) << "First Name" << " | "
    << std::right << std::setw(10) << "Last Name" << " | "
    << std::right << std::setw(10) << "Nick Name"<< std::endl
    << "--------------------------------------------------" << std::endl;
    for(int i = 0; i < std::min(8, index); i++)
    {
        std::cout << std::right << std::setw(10) << i << " | "
        << std::right << std::setw(10) << tenChar(contacts[i].getFirstName()) << " | "
        << std::right << std::setw(10) << tenChar(contacts[i].getLastName()) << " | "
        << std::right << std::setw(10) << tenChar(contacts[i].getNickName()) << std::endl
        << "--------------------------------------------------" << std::endl;
    }
    getContact(contacts, index);
}

int main ()
{
    PhoneBook phoneBook;
    std::string input;
    std::cout << "Enter 'ADD', 'SEARCH' or 'EXIT' : ";
    while(1)
    {
        std::getline(std::cin, input);
        if(input == "ADD")
            addContact(&phoneBook);
        else if(input == "SEARCH")
            phoneBook.searchContact();
        else if(input == "EXIT")
            exit(0);
        else if(std::cin.eof())
            return 1;
        else
            std::cout << "Enter a valid command." << std::endl;
    }
    return 0 ;
}