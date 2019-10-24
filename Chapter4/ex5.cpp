#include <iostream>
#include <string>

using namespace std;

struct CandyBar{
     char band[20];
     float weight;
     int calorie;
};

int main(){

    CandyBar snack = {
            "Mocha Munch",
            2.3,
            350
    };

    cout << snack.band << endl << snack.weight << endl << snack.calorie;
    return 0;
}