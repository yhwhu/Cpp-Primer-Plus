//
// Created by 粟永华 on 2019/11/9.
//

#include <iostream>

using namespace std;

double average(double , double);

int main(){
    double num1, num2, res;
    cout << "Enter num: ";
    cin >> num1 >> num2;
    while (num1 != 0 && num2 != 0){
        res = average(num1, num2);

        cout << "result is : " << res << "\nEnter num: ";
        cin >> num1 >> num2;
    }
    return 0;
}

double average(double x, double y){
    return 2.0*x*y/(x+y);
}