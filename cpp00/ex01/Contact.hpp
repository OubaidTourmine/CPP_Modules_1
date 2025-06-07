#include "PhoneBook.hpp"


class Contact {
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string Number;
        std::string DarkSecret;
    public:
    void setFirstName(std::string FirstName);
    void setLastName(std::string LastName);
    void setNickName(std::string NickName);
    void setNumber(std::string Number);
    void setDarkSecret(std::string DarkSecret);

    const std::string getFirstName() const;
    const std::string getLastName() const;
    const std::string getNickName() const;
    const std::string getNumber() const;
    const std::string getDarkSecret() const;

};