#include <iostream>
#include <cstring>

using namespace std;
const int l = 30;

struct Pie{
     char company[l];
     float length;
     float weight;
};

int main(){
    
    Pie pie;

    cout << "Company: ";
    cin.getline(pie.company, l);

    cout << "Length: ";
    cin >> pie.length;

    cout << "Weight: ";
    cin >> pie.weight;

    cout << pie.company << endl << pie.length << endl << pie.weight;
    return 0;
}