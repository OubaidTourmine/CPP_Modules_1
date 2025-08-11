#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int fixedpoint;
        static const int fractionalbits = 8;
    public:
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        Fixed(Fixed const &oth);
        Fixed &operator=(Fixed const &oth);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        int toInt( void ) const;
        float toFloat( void ) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &other);

#endif