#include "PhoneBook.hpp"

void Contact::setFirstName(std::string FirstName)
{
    this->FirstName =  FirstName;
}

void Contact::setLastName(std::string LastName)
{
    this->LastName =  LastName;
}

void Contact::setNickName(std::string NickName)
{
    this->NickName =  NickName;
}

void Contact::setNumber(std::string Number)
{
    this->Number =  Number;
}

void Contact::setDarkSecret(std::string DarkSecret)
{
    this->DarkSecret =  DarkSecret;
}

const std::string Contact::getFirstName() const
{
    return this->FirstName;
}

const std::string Contact::getLastName() const
{
    return this->LastName;
}

const std::string Contact::getNickName() const
{
    return this->NickName;
}

const std::string Contact::getNumber() const
{
    return this->Number;
}

const std::string Contact::getDarkSecret() const
{
    return this->DarkSecret;
}


