//
// Created by 粟永华 on 2019/11/25.
//

#ifndef CPP_PRIMER_PLUS_GOLF_H
#define CPP_PRIMER_PLUS_GOLF_H

const int Len = 40;

struct golf{
    char fullname[Len];
    int handicap;
};

void setgolf(golf & g, const char * name, int hc);
int setgolf(golf & g);

void handicap(golf & g, int hc);

void showgolf(const golf & g);

#endif //CPP_PRIMER_PLUS_GOLF_H

