//
// Created by 粟永华 on 2019-08-09.
//

// fltadd.cpp - - precision problems with float

#include <iostream>
int main()
{
    using namespace std;
    float a = 2.3e+10f;
    float b = a + 1;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;

    return 0;
}