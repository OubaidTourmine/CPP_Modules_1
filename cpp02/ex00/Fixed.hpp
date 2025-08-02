#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int fixedpoint;
        static const int fractionalbits = 8;
    public:
        Fixed();
        Fixed(Fixed const &oth);
        Fixed &operator=(Fixed const &oth);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif