//Implementation file newClock.cpp

#include <iostream>
#include "newClock.h"
 
using namespace std; 

    //Overload the pre-increment operator.
clockType clockType::operator++()
{ 
    sec++;                  //Step a

    if (sec > 59)           //Step b
    {
        sec = 0;            //Step b.1
        min++;              //Step b.2

        if (min > 59)       //Step b.3
        {
            min = 0;        //Step b.3.1
            hr++;           //Step b.3.2

            if (hr > 23)    //Step b.3.3
                hr = 0;     //Step b.3.3.1
        }
    }
   
    return *this;           //Step c
}

    //Overload the equality operator.
bool clockType::operator==(const clockType& otherClock) const
{
    return (hr == otherClock.hr && min == otherClock.min
            && sec == otherClock.sec);
}

    //Overload the not equal operator.
bool clockType::operator!=(const clockType& otherClock) const
{
    return (hr != otherClock.hr || min != otherClock.min
            || sec != otherClock.sec);
}

    //Overload the less than or equal to operator.
bool clockType::operator<=(const clockType& otherClock) const
{
    return ((hr < otherClock.hr) ||
            (hr == otherClock.hr && min < otherClock.min) ||
            (hr == otherClock.hr && min == otherClock.min &&
             sec <= otherClock.sec));
}

    //Overload the less than operator.
bool clockType::operator<(const clockType& otherClock) const
{
    return ((hr < otherClock.hr) ||
            (hr == otherClock.hr && min < otherClock.min) ||
            (hr == otherClock.hr && min == otherClock.min &&
             sec < otherClock.sec));
}

    //Overload the greater than or equal to operator.
bool clockType::operator>=(const clockType& otherClock) const
{
    return ((hr > otherClock.hr) ||
            (hr == otherClock.hr && min > otherClock.min) ||
            (hr == otherClock.hr && min == otherClock.min &&
             sec >= otherClock.sec));
}

    //Overload the greater than or equal to operator.
bool clockType::operator>(const clockType& otherClock) const
{
    return ((hr > otherClock.hr) ||
            (hr == otherClock.hr && min > otherClock.min) ||
            (hr == otherClock.hr && min == otherClock.min &&
             sec > otherClock.sec));
}

void clockType::setTime(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else 
        hr = 0;

    if (0 <= minutes && minutes < 60)
        min = minutes;
    else 
        min = 0;

    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else 
    sec = 0;
}

void clockType::getTime(int& hours, int& minutes, 
                        int& seconds) const
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

    //Constructor
clockType::clockType(int hours, int minutes, int seconds)
{
    setTime(hours, minutes, seconds);
}

   //Overload the stream insertion operator.
ostream& operator<<(ostream& osObject, const clockType& timeOut)
{
    if (timeOut.hr < 10)
        osObject << '0';
    osObject << timeOut.hr << ':';
	
    if (timeOut.min < 10)
        osObject << '0';
    osObject << timeOut.min << ':';
	
    if (timeOut.sec < 10)
        osObject << '0';
    osObject << timeOut.sec;

    return osObject;  //return the ostream object
}

    //Overload the stream extraction operator.
istream& operator>>(istream& isObject, clockType& timeIn)
{
    char ch;

    isObject >> timeIn.hr;      //Step a
    isObject.get(ch);           //Step b; read and discard :
    isObject >> timeIn.min;     //Step c
    isObject.get(ch);           //Step d; read and discard :
    isObject >> timeIn.sec;     //Step e

    return isObject;            //Step f
}
