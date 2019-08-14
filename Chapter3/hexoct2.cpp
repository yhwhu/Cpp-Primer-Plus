//
// Created by 粟永华 on 2019-08-09.
//

// hexoct2.cpp - - display values in hex and octal

#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure! \n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << hex;
    cout << "waist = " << waist << " (42 in hex)\n";
    cout << oct;
    cout << "inseam = " << inseam << " (42 in octal)\n";

    int test = 0x42;
    cout << "test: " << test << endl;
    return 0;
}