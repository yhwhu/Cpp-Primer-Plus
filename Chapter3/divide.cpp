//
// Created by 粟永华 on 2019-08-09.
//

// divide.cpp - - integer and floating-poing division

#include <iostream>
int main()
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "division example" << endl;
    cout << "Integer: 9/5 = " << 9 / 5 << endl;
    cout << "Floating-point: 9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << "Mixed: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "double constants: 1e7/9.0 = " << 1e7 / 9.0 << endl;
    cout << "float constants: 1e7f/9.0f = " << 1e7f / 9.0f << endl;

    return 0;
}