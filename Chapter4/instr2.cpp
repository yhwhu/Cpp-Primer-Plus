//
// Created by 粟永华 on 2019-08-09.
//

// instr2.cpp  - - reading more than one string with getline


#include <iostream>
#include <cstring>    // for the strlen() function
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize);
    cout << "Enter you  favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name;

    return 0;
}