//
// Created by 粟永华 on 2019/11/9.
//

#include <iostream>

using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void func1(box );
void func2(box* );


int main(){
    box A = {"apple", 20, 30, 40, 50};
    func1(A);
    func2(&A);
    func1(A);
    return 0;
}

void func1(box b){
    cout << b.maker << " " << b.height << " " << b.width << " " << b.length << " " << b.volume << endl;
}

void func2(box* b){
    b->volume = b->length * b->height * b->width;
}