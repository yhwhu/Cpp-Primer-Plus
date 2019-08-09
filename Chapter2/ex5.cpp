//
// Created by 粟永华 on 2019-08-09.
//

// ex5.cpp -- degree transform

#include <iostream>
double transform (double);
using namespace std;

int main()
{
    cout << "Please enter a Celsius value: ";
    double C_degree;
    cin >> C_degree;
    double F_degree;
    F_degree = transform(C_degree);
    cout << C_degree << " degrees Celsius is " << F_degree << " degrees Fahrenheit." << endl;
    return 0;
}

double transform(double degree)
{
    return 1.8 * degree + 32; // 32.0 better
}