#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char first[10], last[20];
    cout << "Enter your first name: ";
    cin.getline(first, 10);
    cout << "Enter your last name: ";
    cin.getline(last, 20);

    strcat(first, ", ");
    strcat(first, last);
    cout << "Hello, " << first << " !\n";

    return 0;
}