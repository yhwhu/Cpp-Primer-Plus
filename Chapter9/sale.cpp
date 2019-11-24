#include "sale.h"
#include <iostream>

namespace SALES{
    void setSales(Sales& s, const double ar[], int n){
        double max = ar[0], min = ar[0], sum = 0;
        for(int i = 0; i < 4; i++){
            if(i < n)
                s.sales[i] = ar[i];
            if(i >= n)
                s.sales[i] = 0;
            if(s.sales[i] > max) max = s.sales[i];
            if(s.sales[i] < min) min = s.sales[i];
            sum += s.sales[i];
        }
        s.average = sum / 4;
        s.max = max;
        s.min = min;
    }
    void setSales(Sales& s){
        std::cout << "Input 4 sales: ";
        std::cin >> s.sales[0] >> s.sales[1] >> s.sales[2] >> s.sales[3];
        double max = s.sales[0], min = s.sales[0], sum = 0;
        for(double sale : s.sales){
            if(sale > max) max = sale;
            if(sale < min) min = sale;
            sum += sale;
        }
        s.average = sum / 4;
        s.max = max;
        s.min = min;
    }
    void showSales(const Sales& s){
        std::cout << s.sales << ", " << s.max << ", " << s.min << ", "<< s.average << std::endl;
    }
}
