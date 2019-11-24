#include <new>
#include <iostream>
#include <cstring>
struct chaff{
    char dross[20];
    int slag;
};

char buffer[200];

int main(){
    chaff * p;
    p = new (buffer) chaff[2];
    strcpy(p->dross, "pig");
    p->slag = 1;
    std::cout << p->dross << ", " << p->slag << std::endl;
}