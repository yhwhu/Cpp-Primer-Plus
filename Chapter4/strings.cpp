//
// Created by 粟永华 on 2019-08-09.
//

// strings.cpp  - - stroing string in an array


#include <iostream>
#include <cstring>    // for the strlen() function
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";

    cout << "Howdy! I'm " << name2;
    cout << "What's your name?\n" ;
    cin >> name1;
    cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes.";
    cout << "Your initial is " << name1[0] << endl;

    name1[3] = '\0';
    cout << "Here are the first 3 characters of my name: " << name1 << endl;

    return 0;
}