//
// Created by 粟永华 on 2019-08-09.
//

// address.cpp  - - using & operator to find addresses


#include <iostream>

int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts << " and donuts address = " << &donuts << endl;
    cout << "cups value = " << cups << " and cups address = " << &cups << endl;

    return 0;
}