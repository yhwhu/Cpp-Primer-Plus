//
// Created by 粟永华 on 2019-08-09.
//

// ex2.cpp -- distance transform

#include <iostream>
int transform(int);

int main()
{
    using namespace std;
    cout << "Please input the length: ";
    int len;
    cin >> len;
    int ma = transform(len);
    cout << len << " long equal to " << ma << " ma." << endl;
    return 0;
}

int transform(int num)
{
    return 220 * num;
}