//
// Created by 粟永华 on 2019/11/9.
//

#include <iostream>
#include <string>

using namespace std;


int main(){
    int k, i, j, l;
    cout << "How many rows? ";
    cin >> k;
    for(i = 1; i <= k; i++){
        for(j = 1; j <= k-i; j++){
            cout << ".";
        }
        for(l = 1; l <= i; l++){
            cout << "*";
        }
        cout << endl;
    }
}