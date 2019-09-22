#include <vector>
#include <chrono>
#include <iostream>
#include <random>
using namespace std;

int main()
{
    default_random_engine generator;
    uniform_real_distribution<double> distUniform(0, 1.0);

    constexpr int vSize = 1000000;
    int i, count1 = 0, count2 = 0;
    vector<double> v(vSize);

    for(int j = 0; j < vSize; j++)
    {
        v.at(j) = distUniform(generator);
    }

    for(int k = 0; k < 3; k++) {
        // Counting the number of elements less than 0.5
        auto t1 = chrono::high_resolution_clock::now();
        for (i = 0; i < v.size(); i++)
            if (v[i] < 0.5) count1++;

        auto t2 = chrono::high_resolution_clock::now();

        chrono::duration<double, std::milli> fp_ms = t2 - t1;
        cout << "The elapsed time to  not sorting " << fp_ms.count()<< " milliseconds.\n";
    }

    cout << endl;
    std::sort(v.begin(), v.end());
    for(int k = 0; k < 3; k++) {
        // Counting the number of elements less than 0.5
        auto t1 = chrono::high_resolution_clock::now();
        for (i = 0; i < v.size(); i++) {
            if (v[i] > 0.5) count2++;
        }
        auto t2 = chrono::high_resolution_clock::now();

        chrono::duration<double, std::milli> fp_ms = t2 - t1;
        cout << "The elapsed time to sorting " << fp_ms.count()<< " milliseconds.\n";
    }

    return 0;
}