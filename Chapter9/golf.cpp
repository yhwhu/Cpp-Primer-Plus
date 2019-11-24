//
// Created by 粟永华 on 2019/11/25.
//

#include "golf.h"
#include <cstring>
#include <iostream>

void setgolf(golf & g, const char * name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g){
    std::cout << "Input name and handicap: ";
    std::cin >> g.fullname;
    std::cin >> g.handicap;

    if(strlen(g.fullname) == 0)
        return 0;
    return 1;
}

void handicap(golf & g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g){
    std::cout << g.fullname << ", " << g.handicap << std::endl;
}
