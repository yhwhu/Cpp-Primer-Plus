#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar{
    char band[20];
    float weight;
    int calorie;
};

int main(){

    CandyBar* snack = new CandyBar[3];

    strcpy(snack->band, "apple");
    snack[1].weight = 20;
    (*(snack + 2)).calorie = 3;
    cout << snack[0].band << endl << (*(snack+1)).weight << endl << (snack+2) -> calorie;

    return 0;
}