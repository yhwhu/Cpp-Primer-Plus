//
// Created by 粟永华 on 2019-08-09.
//

// chartype.cpp - - the char type

#include <iostream>
int main()
{
    using namespace std;
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    cout <<"Hola!\nThank you for the " << ch << " character." << endl;
    
    cout.put(ch);
    return 0;
}