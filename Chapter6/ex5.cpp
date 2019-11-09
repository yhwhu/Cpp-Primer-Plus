//
// Created by 粟永华 on 2019/11/9.
//

#include <iostream>
#include <string>

using namespace std;


int main(){
    double income;
    cout << "Input your income: ";
    cin >> income;
    double tax;
    while (income >= 0){
        if(income < 5000){
            tax = 0;
        }
        else if(income<15000){
            tax = (income-5000)*0.1;
        }
        else if(income<35000){
            tax = 10000 * 0.1 + (income-35000) * 0.15;
        }
        else{
            tax = 10000 * 0.1 + 20000 * 0.15 + (income-35000)*0.2;
        }
        cout << "Tax is: " << tax << endl;
        cin >> income;
    }
}