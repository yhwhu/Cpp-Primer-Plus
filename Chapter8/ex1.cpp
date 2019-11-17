#include <iostream>

using namespace std;

static int times = 0;

void print(string p, int n = 0);

int main(){

    print("111", 10);
    print("2222", 20);
    print("333", 0);
    print("444", 444);

}

void print(string p, int n){
    times++;
    if(n == 0){
        cout << p << endl;
    }
    else{
        for(int i=0; i<times; i++){
            cout << p << endl;
        }
    }


}