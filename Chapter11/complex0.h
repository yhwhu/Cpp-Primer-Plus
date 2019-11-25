//
// Created by 粟永华 on 2019/11/25.
//

//#ifndef CPP_PRIMER_PLUS_COMPLEX0_H
//#define CPP_PRIMER_PLUS_COMPLEX0_H

#include <iostream>
using namespace std;
class complex{
private:
    double real_, imag_;
public:

    complex operator+(complex & other) const ;
    complex operator-(complex & other) const ;
    complex operator*(complex & other) const ;
    friend complex operator*(double x, const complex & other) ;
    complex operator~() const;
    friend ostream & operator<<(ostream & c, const complex & o);
    friend istream & operator>>(istream & c, complex & o);

    complex(double real, double imag);
    complex();
};
//#endif //CPP_PRIMER_PLUS_COMPLEX0_H
