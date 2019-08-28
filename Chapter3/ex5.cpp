//
// Created by 粟永华 on 2019-08-09.
//

// ex5.cpp  - - US population percent


#include <iostream>
int main()
{
    using namespace std;
    long long pop_us, pop_world;

    cout << "Enter the world's population: " ;
    cin >> pop_world;
    cout << "Enter the population of the US: ";
    cin >> pop_us;

    float percent = float(pop_us) / float(pop_world);
    cout << "The population of the US is " << percent*100 << "% of the world population.";

    return 0;
}