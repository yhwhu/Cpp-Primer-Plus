//
// Created by 粟永华 on 2019-08-09.
//

// myfunc.cpp -- defining my function

#include <iostream>
int calculatior(int);

int main(){
    using namespace std;
    cout << "Enter a floor number: " << endl;
    double side;
    cin >> side;
    double area;
    area = calculatior(side);
    cout << "The area is: " << area << endl;
    return 0;
}

int calculatior(int num)
{
    int num2 = num * num;
    return num2;
}