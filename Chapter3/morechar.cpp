//
// Created by 粟永华 on 2019-08-09.
//

// morechar.cpp - - the char type and int type contrasted

#include <iostream>
int main()
{
    using namespace std;
    char ch = 'x';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Add one to the character code:" << endl;

    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!');
    cout << endl << "Done!" << endl;
    return 0;
}