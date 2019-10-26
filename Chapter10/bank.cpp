//
// Created by 粟永华 on 2019/10/26.
//

#include <iostream>
#include "bank.h"

//Bank::Bank() {
//    name_ = "No name";
//    account_ = "No account";
//    money_ = 0;
//}

Bank::Bank(const std::string &name, const std::string &account, double money) {
    name_ = name;
    account_ = account;
    money_ = money;
}



void Bank::show() const {
    std::cout << "Name is: " << name_;
    std::cout << "  Account is: " << account_;
    std::cout << "  Money is: " << money_ << std::endl;
}

void Bank::save(double money) {
    if(money <= 0)
        std::cout << "Save money isn't negative.\n";
    else
        money_ += money;
}

void  Bank::take(double money) {
    if(money_ <= 0)
        std::cout << "The account money is negative.\n";
    else
        money_ -= money;
}