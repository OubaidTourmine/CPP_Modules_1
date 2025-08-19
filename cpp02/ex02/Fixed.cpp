#include "Fixed.hpp"

Fixed::Fixed() {
    this->fixedpoint = 0;
}

Fixed::Fixed(Fixed const &oth)
{
    fixedpoint = oth.fixedpoint;
}

Fixed &Fixed::operator=(Fixed const &oth)
{
    if (this != &oth)
        fixedpoint = oth.fixedpoint;
    return *this;
}

Fixed::~Fixed() {
}

int Fixed::getRawBits( void ) const {
    return this->fixedpoint;
}

void Fixed::setRawBits( int const raw ) {
    fixedpoint = raw;
}

Fixed::Fixed(const int num){
    this->fixedpoint = num * (1 << fractionalbits);
}

Fixed::Fixed(const float num){
    this->fixedpoint = roundf(num * (1 << fractionalbits));
}

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(fixedpoint) / (1 << fractionalbits));
}

int Fixed::toInt( void ) const
{
    return (fixedpoint / (1 << fractionalbits));
}





std::ostream &operator<<(std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
	return (out);
}

bool Fixed::operator<=(Fixed const &oth) const
{
    if(this->fixedpoint <= oth.fixedpoint)
	    return true ;
	return false ;
}

bool Fixed::operator>=(Fixed const &oth) const
{
    if(this->fixedpoint >= oth.fixedpoint)
	    return true ;
	return false ;
}

bool Fixed::operator<(Fixed const &oth) const
{
    if(this->fixedpoint < oth.fixedpoint)
	    return true ;
	return false ;
}

bool Fixed::operator>(Fixed const &oth) const
{
    if(this->fixedpoint > oth.fixedpoint)
	    return true ;
	return false ;
}

bool Fixed::operator!=(Fixed const &oth) const
{
    if(this->fixedpoint != oth.fixedpoint)
	    return true ;
	return false ;
}

bool Fixed::operator==(Fixed const &oth) const
{
    if(this->fixedpoint == oth.fixedpoint)
	    return true ;
	return false ;
}

Fixed Fixed::operator+(Fixed const &oth) const
{
    Fixed result;
    result.setRawBits(fixedpoint + oth.fixedpoint);
	return (result) ;
}

Fixed Fixed::operator-(Fixed const &oth) const
{
    Fixed result;
    result.setRawBits(fixedpoint - oth.fixedpoint);
    return (result) ;
}

Fixed Fixed::operator*(Fixed const &oth) const
{
    Fixed result;
    result.setRawBits((fixedpoint * oth.fixedpoint) >> fractionalbits);
    return (result) ;
}

Fixed Fixed::operator/(Fixed const &oth) const
{
    if (oth.fixedpoint == 0)
	{
        std::cout << "Error: Division by zero" << std::endl;
        return (Fixed()) ;
	}
    Fixed result;
    result.setRawBits((fixedpoint << fractionalbits) / oth.fixedpoint);
    return (result) ;
}

Fixed &Fixed::operator++()
{
	this->fixedpoint += 1;
	return (*this);
}
Fixed &Fixed::operator--()
{
	this->fixedpoint -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	result;

	result = *this;
	this->fixedpoint += 1;
	return (result);
}
Fixed Fixed::operator--(int)
{
	Fixed	result;

	result = *this;
	this->fixedpoint -= 1;
	return (result);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}