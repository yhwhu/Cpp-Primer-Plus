//
// Created by 粟永华 on 2019/10/26.
//

#include "person.h"
#include <iostream>

using namespace std;

Person::Person(const string &ln, const char *fn) {
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const {
    cout << fname << " " << lname << endl;
}

void Person::FormalShow() const {
    cout << lname << " " << fname << endl;
}