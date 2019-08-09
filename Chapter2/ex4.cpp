//
// Created by 粟永华 on 2019-08-09.
//

// ex4.cpp -- year to month

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your age: ";
    int year;
    cin >> year;
    int month = year * 12;
    cout << "You are " << month << " months." << endl;
    return 0;
}
