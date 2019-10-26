//
// Created by 粟永华 on 2019/10/26.
//

#include <string>
#ifndef CPP_PRIMER_PLUS_PERSON_H
#define CPP_PRIMER_PLUS_PERSON_H

using namespace std;

class Person {
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person(){lname = ""; fname[0] = '\0';}
    Person(const string& ln, const char *fn="Heyyou");
    void Show() const ;
    void FormalShow() const ;
};


#endif //CPP_PRIMER_PLUS_PERSON_H
