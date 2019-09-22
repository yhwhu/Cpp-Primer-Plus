#include <vector>
#include <chrono>
#include <iostream>
using namespace std;

int main()
{
    vector<int> vInt = {200, 10, 40, 20, 15, 700};
    int n = vInt.size(), tmp;
    for(int i = n; i > 0; i--)
    {
        for(int j = 0; j < i - 1; j++)
        {
            if(vInt.at(j) > vInt.at(j+1))
            {
                tmp = vInt.at(j + 1);
                vInt.at(j + 1) = vInt.at(j);
                vInt.at(j) = tmp;
            }
        }
    }
//    auto ptr = vInt.begin();
    vector<int>::iterator ptr;
    for(ptr = vInt.begin(); ptr < vInt.end(); ptr++)
    {
        cout << *ptr << " ";
    }
//    for(int l = 0; l < n; l++){
//        cout << vInt.at(l) << ' ';
//    }
    return 0;
}