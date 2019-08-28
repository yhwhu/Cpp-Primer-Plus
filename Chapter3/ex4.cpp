//
// Created by 粟永华 on 2019-08-09.
//

// ex4.cpp  - - seconds to days, hours, minutes, seconds


#include <iostream>
int main()
{
    using namespace std;
    const int secs_per_day = 24 * 60 * 60;
    const int secs_per_hour = 60 * 60;
    const int secs_per_minute = 60;

    long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    long days, hours, minutes;
    days = seconds / secs_per_day;
    hours = seconds % secs_per_day / secs_per_hour;
    minutes = seconds % secs_per_day % secs_per_hour / secs_per_minute;

    cout << seconds << " seconds = " <<
    days << " days, " << hours << " hours, " << minutes << " minutes, "  <<
    seconds % secs_per_day % secs_per_hour % secs_per_minute << " seconds";

    return 0;
}