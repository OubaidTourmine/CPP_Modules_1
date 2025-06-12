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
