//
// Created by 粟永华 on 2019-08-09.
//

// assgn_st.cpp  - - assigning structures


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
    inflatable bouquet =
            {
            "sunflowers",
            0.20,
            12.49
            };
    inflatable choice;
    choice = bouquet;

   cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << endl;
   cout << "choice: " << choice.name << " for $" << choice.price << endl;

    return 0;
}