//
// Created by 粟永华 on 2019-08-09.
//

// ex2.cpp


#include <iostream>
int main()
{
    using namespace std;
    const int cm_per_m = 100;
    const float kg_per_kilos = 0.5;

    int height, meter, cm;
    float meter_float, weight, kilos, bmi;
    cout << "Enter your height: ";
    cin >> height;

    cout << "Enter your weight: ";
    cin >> weight;

    meter = height / cm_per_m;
    cm = height % cm_per_m;
    cout << "Your height is " << meter << "m " << cm << "cm" << endl;

    kilos = weight / kg_per_kilos;
    cout << "Your weight is " << kilos << "kilos" << endl;

    meter_float = float(height) / float(cm_per_m); // result: 1.71
//    meter_float = height / cm_per_m;                result: 1
    bmi = weight / meter_float;
    cout << "Your bmi is " << bmi << endl;
    cout << meter_float;
    return 0;
}