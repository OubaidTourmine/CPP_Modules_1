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
