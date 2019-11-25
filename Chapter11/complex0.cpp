//
// Created by 粟永华 on 2019/11/25.
//

#include "complex0.h"

complex::complex() {
    real_ = 0;
    imag_ = 0;
}

complex::complex(double real, double imag) {
    real_ = real;
    imag_ = imag;
}

complex complex::operator+(complex &other) const {
    double real = real_ + other.real_;
    double imag = imag_ + other.imag_;
    return complex(real, imag);
}

complex complex::operator-(complex &other) const {
    double real = real_ - other.real_;
    double imag = imag_ - other.imag_;
    return complex(real, imag);
}

complex complex::operator*(complex &other) const {
    double real = real_ * other.real_ - imag_ * other.imag_;
    double imag = real_ * other.imag_ + imag_ * other.real_;
    return complex(real, imag);
}

complex complex::operator~() const {
    return complex(real_, -imag_);
}

complex operator*(double x, const complex &other) {
    return complex(x * other.real_, x * other.imag_);
}

ostream & operator<<(ostream & c, const complex & o){
    if(o.imag_ < 0){
        c << "(" << o.real_  << o.imag_ << "i)";
    }
    else
        c << "(" << o.real_ << "+" << o.imag_ << "i)";
    return c;
}

istream &operator>>(istream &c, complex &o) {
    cout << "real: ";
    c >> o.real_;
    cout << "imaginary: ";
    c >> o.imag_;
    return c;
}

