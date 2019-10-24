#include <iostream>
#include <string>

using namespace std;

struct CandyBar{
     char band[20];
     float weight;
     int calorie;
};

int main(){

    CandyBar snack[3] = {{"apple", 10,1},
                         {"banana", 20,2},
                         {"grape", 30, 3}};

    cout << snack[0].band << endl << (*(snack+1)).weight << endl << (snack+2) -> calorie;
    return 0;
}