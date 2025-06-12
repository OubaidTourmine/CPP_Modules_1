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
