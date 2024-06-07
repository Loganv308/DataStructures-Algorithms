#ifndef DATETYPE_H
#define DATETYPE_H

#include <iostream>

using namespace std;

class dateType
{
private:
    int year;
    int day;
    int month;
    
public:
    dateType(int m, int d, int y)
    {
        month = m;
        day = d;
        year = y;
    }

    int checkYear(int year)
        {        
            if(year >= 10000)
            {
                cout << "Invalid Month entry" << endl;
                exit(EXIT_FAILURE);
            }
            return year;
        }

    int checkDay(int day)
        {
        if(day > 31)
            {
                cout << "Invalid Day Entry" << endl;
                exit(EXIT_FAILURE);
            }
        return day;
        }

    int checkMonth(int month)
        {        
            if(month > 12)
            {
                cout << "Invalid Month entry" << endl;
                exit(EXIT_FAILURE);
            }
            return month;
        }

    int finalDate(int y, int d, int m)
        {
            cout << "Date Entered: " << m << "/" << d << "/" << y;
            exit(EXIT_SUCCESS);
        }

    int isLeapYear(int year1)
        {
            if(year1 % 4 == 0)
            {
                cout << year1 << " is a leap year!" << endl;
            }
            else
            {
                cout << year1 << " is not a leap year!" << endl;
            }

            return year1;
        }
};



#endif
