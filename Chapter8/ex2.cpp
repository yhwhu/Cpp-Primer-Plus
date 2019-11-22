#include <iostream>
#include <string>
using namespace std;

struct CandyBar{
    string band = "ap[le";
    double weight = 1.2;
    int hot = 10;
};

void setval(CandyBar& bar, string band="Millennium Munch" , double weight=2.85, int hot=40);
void show(const CandyBar& bar);

int main(){
    CandyBar bar;
    setval(bar);
    show(bar);
    setval(bar, "ok", 20.2,30);
    show(bar);
    return 0;
}

void setval(CandyBar& bar, const string band , double weight, int hot){
    bar.band = band;
    bar.weight = weight;
    bar.hot = hot;

}

void show(const CandyBar& bar){
    cout << bar.band << " " << bar.weight << " " << bar.hot << endl;
}