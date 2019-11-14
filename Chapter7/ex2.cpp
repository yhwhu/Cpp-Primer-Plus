//
// Created by 粟永华 on 2019/11/9.
//

#include <iostream>

using namespace std;

void input(double ar[], int);
void show(const double ar[], int);
void average(const double ar[], int);

int main(){
    double ar[10] = {0};
    input(ar, 10);
    show(ar, 10);
    average(ar, 10);
    return 0;
}

void input(double ar[], int n){
    cout << "Input the grade, enter negative num to quit: ";
    int grade, i=0;
    cin >> grade;
    while (grade>0 && i<n){
        ar[i] = grade;
        i++;
        cin >> grade;
    }
}

void show(const double ar[], int n){
    cout << "The array is: ";
    int i;
    for(i=0; i<n; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}

void average(const double ar[], int n){
    double summation = 0;
    int i=0;
    while(ar[i]>0 && i<n){
        summation += ar[i];
        i++;
    }
    cout << "The summation is: " << summation << endl;
}