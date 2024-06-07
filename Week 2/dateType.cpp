#include <iostream>
#include "dateType.h"

using namespace std;

int main()
{
    int year; 
    int day;
    int month;

    dateType date1(month, day, month);
    
    cout << "Set the month: ";
    cin >> month;
    date1.checkMonth(month);

    cout << "Set the day: ";
    cin >> day;
    date1.checkDay(day);

    cout << "Set the year: ";
    cin >> year;
    date1.checkYear(year);

    date1.isLeapYear(year);

    date1.finalDate(year, day, month);
}