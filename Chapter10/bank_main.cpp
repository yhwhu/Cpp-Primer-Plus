//
// Created by 粟永华 on 2019/10/26.
//

#include <string>
#include "bank.h"

int main(){
    std::string s="suyonghua", a="yh";
    Bank mybank(s, a, 200);
    mybank.show();
    mybank.take(200);
    mybank.show();
    mybank.take(100);
    mybank.show();
    mybank.save(20);
    mybank.show();

    Bank mybank2;
    mybank2.show();
}