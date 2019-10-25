//file matrix.cpp
#include "matrix.hpp"
matrix::matrix(){
    data.resize(0);
}

matrix::matrix(unsigned int m_, unsigned int n_){
    m = m_;
    n = n_;
    data.resize(m*n);
}

void matrix::resize(unsigned int m_, unsigned int n_) {
    m = m_;
    n = n_;
    data.resize(m*n);
}

matrix matrix::operator+(const matrix& rhs){
    matrix tmp(m, n);
    for(int i=0; i<m*n; i++){
        tmp.data.at(i) = data.at(i) + rhs.data.at(i);
    }
    return tmp;
}

matrix matrix::operator*(const matrix&rhs){
    matrix tmp(m, n);
    for(int i=0; i<m*n; i++){
        tmp.data.at(i) = data.at(i) * rhs.data.at(i);
    }
    return tmp;
}

double& matrix::operator()(unsigned int i, unsigned int j){
    return data.at(j*m+i);
}

double matrix::operator() (unsigned int i, unsigned int j) const{
    return data.at(j*m+i);
}

ostream & operator<<(ostream & os, const matrix & mat)
{
    unsigned int m = mat.m, n = mat.n;
    os << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            os << mat.data.at(i*n+j) << " ";
        }
        os << endl;
    }
    return os;
}
