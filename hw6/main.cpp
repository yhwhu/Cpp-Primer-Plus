#include "matrix.hpp"
int main(){
    matrix A(2,2);
    matrix B, C;

    A(0,0) = 1.5;
    A(1,0) = 2.2;
    A(0,1) = 3.3;
    A(1,1) = 1.5;
    cout << "A:";
    cout << A << endl;

    //Make B a 2-by-2 matrix
    B.resize(2,2);
    B(0,0) = 1.1;
    B(1,0) = 2.3;
    B(0,1) = 2.3;
    B(1,1) = 1.2;
    cout << "B:";
    cout << B << endl;
    cout << B(1, 1) << endl;

    C = A+B;
    cout<< "A+B=" << C << endl;
    C = A*B;
    cout<< "A*B=" << C << endl;

    return 0;
}
