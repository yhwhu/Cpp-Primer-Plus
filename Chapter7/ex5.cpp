//
// Created by 粟永华 on 2019/11/9.
//

#include <iostream>

using namespace std;


int factorial(int);

int main(){
    int n, res;
    cin >> n;
    res = factorial(n);
    cout << "res: " << res << endl;
    return 0;
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
