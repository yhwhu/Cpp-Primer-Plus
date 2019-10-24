#include <iostream>
#include <string>
using namespace std;

int main(){

    string first, last;
    cout << "Enter your first name: ";
    cin >> first;
    cout << "Enter your last name: ";
    cin >> last;

    cout << "Hello, " << first + ", " + last<< " !\n";

    return 0;
}