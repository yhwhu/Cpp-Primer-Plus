//
// Created by 粟永华 on 2019-08-09.
//

// ex6.cpp -- distance transform

#include <iostream>
double transform (double);
using namespace std;

int main()
{
    cout << "Please enter the number of light years: ";
    double light_year;
    cin >> light_year;
    double unit;
    unit = transform(light_year);
    cout << light_year << " light years = " << unit << " astronomical units." << endl;
    return 0;
}

double transform(double light_year)
{
    return light_year * 63240;
}