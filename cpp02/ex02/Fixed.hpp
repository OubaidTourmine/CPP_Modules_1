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
        ~Fixed();
        Fixed &operator=(Fixed const &oth);
        bool operator!=(Fixed const &oth) const;
        bool operator==(Fixed const &oth) const;
        bool operator<=(Fixed const &oth) const;
        bool operator>=(Fixed const &oth) const;
        bool operator<(Fixed const &oth) const;
        bool operator>(Fixed const &oth) const;
        Fixed operator+(Fixed const &oth) const;
        Fixed operator-(Fixed const &oth) const;
        Fixed operator*(Fixed const &oth) const;
        Fixed operator/(Fixed const &oth) const;
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed const &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed const &max(const Fixed &a, const Fixed &b);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        int toInt( void ) const;
        float toFloat( void ) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &other);

#endif