#include "Fixed.hpp"

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedpoint;
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "getRawBits member function called" << std::endl;
    fixedpoint = raw;
}

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(fixedpoint) / (1 << fractionalbits));
}

int Fixed::toInt( void ) const
{
    return (fixedpoint / (1 << fractionalbits));
}

Fixed::Fixed() {
    this->fixedpoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num){
    this->fixedpoint = num * (1 << fractionalbits);
    std::cout << "int Constructor called" << std::endl;
}
