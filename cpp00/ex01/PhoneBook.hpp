#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"



class PhoneBook {
        Contact contacts[8];
        int index;
    public:
        PhoneBook();
        void add(Contact c);
        void searchContact();

};

#endif