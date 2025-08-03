#include "Fixed.hpp"

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedpoint;
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "getRawBits member function called" << std::endl;
    fixedpoint = raw;
}

Fixed::Fixed() {
    this->fixedpoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &oth)
{
    fixedpoint = oth.fixedpoint;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &oth)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &oth)
        fixedpoint = oth.fixedpoint;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

 