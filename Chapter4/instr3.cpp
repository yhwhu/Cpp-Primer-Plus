//
// Created by 粟永华 on 2019-08-09.
//

// instr3.cpp  - - reading more than one string with get() & get()


#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name, ArSize).get();
    cout << "Enter you  favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name;

    return 0;
}