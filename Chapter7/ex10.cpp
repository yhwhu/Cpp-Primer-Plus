//
// Created by 粟永华 on 2019/11/9.
//

#include <iostream>

using namespace std;

double add(double , double );
double mul(double , double );
void calculate(double , double , double (*pt)(double, double), double (*pd)(double, double));

// 指针数组
void calculate(double , double , double (*pt[2])(double, double));

int main(){
    double x, y;
    cin >> x >> y;
    calculate(x, y, add, mul);

    double (*pt[2])(double, double) = {add, mul};
    calculate(x, y, pt);
    return 0;
}

double add(double x, double y){
    return x+y;
}

double mul(double x, double y){
    return x*y;
}

void calculate(double x, double y, double (*pt)(double, double), double (*pd)(double, double)){
    cout << "1: " << pt(x, y) << " " << pd(x, y) << endl;
}

void calculate(double x, double y, double (*pt[2])(double, double)){
    cout << "2: " << pt[0](x, y) << " " << pt[1](x, y) << endl;
}
