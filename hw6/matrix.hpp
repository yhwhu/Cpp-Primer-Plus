// file: matrix.hpp
#include <vector>
#include <iostream>
using namespace std;

class matrix{
private:
    unsigned int m, n;
    vector<double> data;
public:
    matrix();

    // initialize matrix of size m_ and n_.
    matrix(unsigned int m_, unsigned int n_);

    // Adjust the size of the matrix.
    void resize(unsigned int m_, unsigned int n_);

    unsigned int getm() const { return m;}
    unsigned int getn() const { return n;}

    // Addition and multiplication for two matrices
    // of appropriate sizes.
    matrix operator+(const matrix& rhs);
    matrix operator*(const matrix& rhs);

    // get or assign value for (i,j)-th matrix element.
    double& operator() (unsigned int, unsigned int);
    double operator() (unsigned int, unsigned int) const;

    // ouput matrix to the screen.
    friend ostream & operator<<(ostream & os, const matrix & mat);
};
