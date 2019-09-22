#include <vector>
#include <chrono>
#include <iostream>
using namespace std;

int main()
{
    for(int k = 0; k < 3; k++) {
        auto t1 = chrono::high_resolution_clock::now();
        constexpr int vSize = 1000000;
        vector<int> vInt(vSize);
        int i;

        for (i = 0; i < vSize; i++)
            vInt.push_back(i);

        auto t2 = chrono::high_resolution_clock::now();

        chrono::duration<double, std::milli> fp_ms = t2 - t1;
        cout << "The elapsed time to push_back() " << fp_ms.count()<< " milliseconds.\n";
    }

    cout << endl;

    for(int k = 0; k < 3; k++) {
        auto t1 = chrono::high_resolution_clock::now();
        constexpr int vSize = 1000000;
        vector<int> vInt(vSize);
        int i;

        for (i = 0; i < vSize; i++)
            vInt.at(i) = i;

        auto t2 = chrono::high_resolution_clock::now();

        chrono::duration<double, std::milli> fp_ms = t2 - t1;
        cout << "The elapsed time to at() " << fp_ms.count()<< " milliseconds.\n";
    }
    return 0;
}