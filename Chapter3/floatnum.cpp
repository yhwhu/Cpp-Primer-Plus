//
// Created by 粟永华 on 2019-08-09.
//

// floatnum.cpp - - floating-point types

#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << " , a million tubs = " << tub * million;
    cout << "\nand ten million tubs = " << 10 * tub * million << endl;

    cout << '\n';
    cout << "mint = " << mint;
    cout << ", and a million mints = " << million * mint << endl;

    return 0;
}