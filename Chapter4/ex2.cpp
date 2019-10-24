#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const int ArSize = 20;
    string name, dessert;
    cout << "Enter you name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}