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

double matrix::operator() (unsigned int i, unsigned int j) const {
    cout << "visit ith jth\n";
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



int main(){
    matrix A(2,2);
    matrix B, C;

    A(0,0) = 1.5;
    A(1,0) = 2.2;
    A(0,1) = 3.3;
    A(1,1) = 1.5;
    cout << "A:";
    cout << A << endl;

    double a = A(1,1);
    //Make B a 2-by-2 matrix
    B.resize(2,2);
    B(0,0) = 1.1;
    B(1,0) = 2.3;
    B(0,1) = 2.3;
    B(1,1) = 1.2;
    cout << "B:";
    cout << B << endl;

    C = A+B;
    cout<< "A+B=" << C << endl;
    C = A*B;
    cout<< "A*B=" << C << endl;

    return 0;
}
