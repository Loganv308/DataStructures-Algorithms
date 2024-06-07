#include <iostream>
#include "newClock.h"

#include "unorderedArrayListType.h"
 
using namespace std; 

int main() 
{
    unorderedArrayListType<clockType> clockList(25);    //Line 1

    clockType cl;                                       //Line 2

    cl.setTime(2, 34, 50);                              //Line 3
    clockList.insertEnd(cl);                            //Line 4
    cl.setTime(8, 14, 45);                              //Line 5
    clockList.insertEnd(cl);                            //Line 6
    cl.setTime(6, 55, 12);                              //Line 7
    clockList.insertEnd(cl);                            //Line 8
    cl.setTime(11, 18, 3);                              //Line 9
    clockList.insertEnd(cl);                            //Line 10
    cl.setTime(10, 15, 13);                             //Line 11
    clockList.insertEnd(cl);                            //Line 12
    cl.setTime(15, 11, 12);                             //Line 13
    clockList.insertEnd(cl);                            //Line 14

    cout << "Line 15: clockList: ";                     //Line 15
    clockList.print();                                  //Line 16
    cout << endl;                                       //Line 17

    cout << "Line 18: Enter the hours, minuts, and "
         << "seconds of clock to be " 
         << "deleted in the form hh:mm:sec: ";          //Line 18
    cin >> cl;                                          //Line 19
    cout << endl;                                       //Line 20

    clockList.remove(cl);                               //Line 21
    cout << "Line 22: After removing " << cl
         << " clockList: ";                             //Line 22
    clockList.print();                                  //Line 23
    cout << endl;                                       //Line 24
 
    cout << "Line 25: Enter the hours, minuts, and "
        << "seconds of clock to be searched in the "
        << "form hh:mm:sec: ";                          //Line 25

    cin >> cl;                                          //Line 26
    cout << endl;                                       //Line 27

    if (clockList.seqSearch(cl) != -1)                  //Line 28
        cout << "Line 29: " << cl 
             << " found in clockList." << endl;         //Line 29
    else                                                //Line 30
        cout << "Line 31: " << cl 
             << " is not in clockList." << endl;        //Line 31

    return 0;    
}
