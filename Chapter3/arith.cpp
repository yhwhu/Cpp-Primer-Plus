//
// Created by 粟永华 on 2019-08-09.
//

// arith.cpp - - some C++ arithmetic

#include <iostream>
int main()
{
    using namespace std;

    float hats, heads;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << ", heads = " << heads << endl;
    cout << "+ " << hats + heads << endl;
    cout << "- " << hats - heads << endl;
    cout << "* " << hats * heads << endl;
    cout << "/ " << hats / heads << endl;

    return 0;
}