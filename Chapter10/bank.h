//
// Created by 粟永华 on 2019/10/26.
//
#include <string>

#ifndef CPP_PRIMER_PLUS_BANK_H
#define CPP_PRIMER_PLUS_BANK_H


class Bank {
private:
    std::string name_, account_;
    double money_;
public:
//    Bank();
    Bank(const std::string& name="No name", const std::string& account="No account", double money=0);
    void show() const ;
    void save(double money);
    void take(double money);
};


#endif //CPP_PRIMER_PLUS_BANK_H
