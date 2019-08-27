//
// Created by 粟永华 on 2019-08-09.
//

// height.cpp - - tranfer m to m and cm

#include <iostream>
int main()
{
    using namespace std;
    const int cm_per_m = 100;

    int height;
    cout << "Enter you height: ";
    cin >> height;

    int meter = height / cm_per_m;
    int cm = height % cm_per_m;
    cout << "Your height is " << meter << "m " << cm << "cm." << endl;

    return 0;
}