//
// Created by 粟永华 on 2019-08-09.
//

// instr1.cpp  - - reading more than one string


#include <iostream>
#include <cstring>    // for the strlen() function
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter you  favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name;

    return 0;
}