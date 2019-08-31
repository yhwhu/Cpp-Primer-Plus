//
// Created by 粟永华 on 2019-08-09.
//

// strtype3.cpp  - - more string class features


#include <iostream>
#include <string>
#include <cstring>       // C-style string library

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    strcpy(charr1, charr2);
    str1 = str2;

    strcat(charr1, " juice");
    str1 += " paste";

    int len1 = strlen(charr1);
    int len2 = str1.size();

    cout << "The " << charr1 << " contains " << len1 << " characters.\n";
    cout << "The " << str1 <<   " contains " << len2 << " characters.\n";

    return 0;
}