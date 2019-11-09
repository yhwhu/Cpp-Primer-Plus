//
// Created by 粟永华 on 2019/11/9.
//

#include <iostream>

int main(){
    using namespace std;
    int num, sum = 0;
    cin >> num;
    while(num!=0){
        sum += num;
        cout << "Now the cusum is: " << sum << endl;
        cin >> num;
    }

}