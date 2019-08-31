//
// Created by 粟永华 on 2019-08-09.
//

// structur.cpp  - - a simple structure


#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
            {
            "Glorious Gloria",
            1.88,
            29.99
            };
    inflatable pal =
            {
            "Audacious Arthur",
            3.12,
            32.99
            };
    cout << "Expand your guest list with " << guest.name << " and " << pal.name << "!\n";
    cout << "You have both for $" << guest.price + pal.price << "!\n";
    
    return 0;
}