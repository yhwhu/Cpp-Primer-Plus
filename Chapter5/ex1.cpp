//
// Created by 粟永华 on 2019/11/9.
//
#include <iostream>


int main(){
    using namespace std;
    int low, high, sum=0;
    cout << "Enter two number: \n";
    cin >> low >> high;
    for(;low<=high;low++){
        sum+=low;
    }
    cout << "The sum is: " << sum << endl;

}