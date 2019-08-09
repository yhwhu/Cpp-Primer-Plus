//
// Created by 粟永华 on 2019-08-09.
//

// sqrt.cpp -- using the sqrt() functions

#include <iostream>
#include <cmath>

int main(){
    using namespace std;
    cout << "Enter a floor number: " << endl;
    double area;
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "The square root of the number is: " << side << endl;
    return 0;
}