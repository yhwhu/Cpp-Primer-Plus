//
// Created by 粟永华 on 2019-08-09.
//

// strtype2.cpp  - - assigning, adding, and appending


#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string s1 = "penguin";
    string s2, s3;
    cout << "Your can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2:" << s2 << endl;
    s2 = "buzzard";
    cout << "Your can assign a C-style string to a sting object.\ns2 = \"buzzard\"\n";
    cout << "s2 : " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can append string.\n";
    s1 += s2;
    cout << "s1 += s2 yield s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \" for a day\" yield s2 = " << s2 << endl;

    return 0;
}