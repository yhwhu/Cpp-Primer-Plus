//
// Created by 粟永华 on 2019-08-09.
//

// init_ptr.cpp  - - initialize a pointer


#include <iostream>

int main()
{
    using namespace std;
    int higgens = 5;
    int * pt;
    pt = &higgens;

    cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt << "; value of pt = " << pt << endl;

    return 0;
}