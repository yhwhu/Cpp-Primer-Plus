#include <iostream>
#include <string>

using namespace std;
const int l = 30;

struct Pie{
     char company[l];
     float length;
     float weight;
};

int main(){

    Pie *pie = new Pie;
    cout << "Length: ";
    cin >> pie->length;

    cin.get();
    cout << "Company: ";
    cin.getline(pie->company, l);

    cout << "Weight: ";
    cin >> pie->weight;

    cout << pie->company << endl << pie->length << endl << pie->weight;
    return 0;
}