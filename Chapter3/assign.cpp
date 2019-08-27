//
// Created by 粟永华 on 2019-08-09.
//

// assign.cpp - - type changes on initialization

#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3;
    int guess (15.98) ;
    int debt = 3.1e12;

    cout << tree << endl << guess << endl << debt << endl;

    return 0;
}