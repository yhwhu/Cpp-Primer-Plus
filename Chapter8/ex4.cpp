#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct stringy{
    char* str;
    int ct;
};

void show(const stringy&, int = 1);
void show(const char* , int =1);
void set(stringy&, char*);

int main(){
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}
void show(const stringy& Str, int n){
    for( ; n > 0; n--){
        for(int i = 0; Str.str[i]!= '\0'; i++) cout << Str.str[i];
        cout << endl;
    }
}
void show(const char* test, int n){
    for( ; n > 0; n--){
        for(int i = 0; test[i]!= '\0'; i++) cout << test[i];
        cout << endl;
    }
}
void set(stringy& Str, char* test){
    char *p = new char [100];       // 为什么要使用 new
    Str.str = p;
    strcpy(p, test);
    Str.ct = strlen(p);
    delete [] p;
}
