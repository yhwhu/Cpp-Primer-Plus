//
// Created by 粟永华 on 2019-08-09.
//

// ex7.cpp -- time

#include <iostream>
void compose (int, int);
using namespace std;

int main()
{
    cout << "Please enter the hours: ";
    int hour;
    cin >> hour;
    cout << "Please enter the minutes: ";
    int minute;
    cin >> minute;
    compose(hour, minute);
    return 0;
}

void compose(int hour, int minute)
{
    cout << "Time: " << hour << ":" << minute << endl;
}