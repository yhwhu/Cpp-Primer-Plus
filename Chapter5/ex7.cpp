//
// Created by 粟永华 on 2019/11/9.
//

#include <iostream>
#include <string>

using namespace std;

struct car{
    string make;
    int make_year;
};

int main(){
    int k;
    cout << "How many? ";
    cin >> k;
    car* info = new car[k];
    for(int i = 0; i < k; i++){
        cout << "Car #" << i+1 << ": \n";
        cout << "Please enter the make: ";
        cin >> info[i].make;
        cout << "Please enter the year make: ";
        cin >> info[i].make_year;
    }
    cout << "Here is your collection: \n";
    for(int i = 0; i < k; i++){
        cout << info[i].make_year << " ";
        cout << info[i].make << endl;
    }

    delete [] info;
}