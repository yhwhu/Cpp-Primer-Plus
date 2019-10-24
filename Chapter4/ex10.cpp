#include <iostream>
#include <array>
using namespace std;

int main(){
    array<float, 3> time;
    cout << "first"
            ": ";
    cin >> time[0];
    cout << "second: ";
    cin >> time[1];
    cout << "third: ";
    cin >> time[2];

    cout << "3 times, and the average is: " << (time[0] + time[1] + time[2]) / 3 << endl;
}