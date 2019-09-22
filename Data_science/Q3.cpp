#include <vector>
#include <chrono>
#include <iostream>
using namespace std;

int main()
{
    vector<int> vInt = {23, 11, 4, 7, 15, 1};
    int n = vInt.size(), tmp;

    cout << "Before sorting: ";
    vector<int>::iterator ptr1;
    for(ptr1 = vInt.begin(); ptr1 < vInt.end(); ptr1++)
    {
        cout << *ptr1 << " ";
    }

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
    cout << "\nAfter sorting: ";
    vector<int>::iterator ptr2;
    for(ptr2 = vInt.begin(); ptr2 < vInt.end(); ptr2++)
    {
        cout << *ptr2 << " ";
    }
//    for(int l = 0; l < n; l++){
//        cout << vInt.at(l) << ' ';
//    }
    return 0;
}