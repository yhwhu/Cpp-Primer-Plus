#include <iostream>
using namespace std;

int main()
{
    char first[30], last[30], grade;
    int age;
    cout << "What's your first name? ";
    cin.getline(first, 30);
    cout << "What's your last name? ";
    cin.getline(last, 30);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << last <<  ", " << first << endl;

    grade = grade + 1;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}