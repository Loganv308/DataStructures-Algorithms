#include <iostream>                                 //Line 1
#include <string>                                   //Line 2
#include "unorderedArrayListType.h"                 //Line 3
 
using namespace std;                                //Line 4
 
int main()                                          //Line 5
{                                                   //Line 6
    unorderedArrayListType<string> stringList(25);  //Line 7

    string str;                                     //Line 8

    cout << "Line 9: Enter 5 strings: ";            //Line 9

    for (int count = 0; count < 5; count++)         //Line 10
    {                                               //Line 11
        cin >> str;                                 //Line 12
        stringList.insertEnd(str);                  //Line 13
    }                                               //Line 14

    cout << endl;                                   //Line 15

    cout << "Line 16: stringList: ";                //Line 16
    stringList.print();                             //Line 17
    cout << endl;                                   //Line 18

    cout << "Line 19: Enter the string to be " 
         << "deleted: ";                            //Line 19
    cin >> str;                                     //Line 20
    cout << endl;                                   //Line 21

    stringList.remove(str);                         //Line 22
    cout << "Line 23: After removing " << str
         << " stringList: ";                        //Line 23
    stringList.print();                             //Line 24
    cout << endl;                                   //Line 25
 
    cout << "Line 26: Enter the search item: ";     //Line 26

    cin >> str;                                     //Line 27
    cout << endl;                                   //Line 28

    if (stringList.seqSearch(str) != -1)            //Line 29
        cout << "Line 30: " << str 
             << " found in stringList." << endl;    //Line 30
    else                                            //Line 31
        cout << "Line 32: " << str 
             << " is not in stringList." << endl;   //Line 32

    return 0;                                       //Line 33
}                                                   //Line 34
