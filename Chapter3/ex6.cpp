//
// Created by 粟永华 on 2019-08-09.
//

// ex6.cpp  - - Fuel consumption


#include <iostream>
int main()
{
    using namespace std;
    float distances, gasolines;

    cout << "Enter distances: ";
    cin >> distances;

    cout << "Enter gasolines: ";
    cin >> gasolines;

    float fuel_per_100k = gasolines / (distances / 100);
    cout << "Fuel consumption per 100 kilometers: " << fuel_per_100k << endl;

    return 0;
}