//
// Created by 粟永华 on 2019-08-09.
//

// ex3.cpp  - - transfer degree


#include <iostream>
int main()
{
    using namespace std;
    const float min_per_degree = 60.0;
    const float sec_per_min = 60.0;

    float degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, seconds";
    cout << "\nFirst, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    float sec_to_min, min_to_degree, latitude_of_degrees;
    sec_to_min = seconds / sec_per_min;
    min_to_degree = (minutes + sec_to_min) / min_per_degree;
    latitude_of_degrees = degrees + min_to_degree;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " <<
    latitude_of_degrees << " degrees" << endl;

    return 0;
}