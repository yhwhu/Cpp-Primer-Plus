#include "sale.h"


int main(){
    using namespace SALES;
    Sales S;

    double s[4] = {1,2,3,4};
    setSales(S, s, 4);
    showSales(S);

    setSales(S);
    showSales(S);
}