//Data: 2.85 6.74 28.93 61.22 10.00 45.34 61.78 5.75

#include <iostream>
 
#include "unorderedArrayListType.h"

using namespace std; 

int main() 
{
    unorderedArrayListType<double> numList(25); //Line 1

    double num;                                 //Line 2

    cout << "List 3: Enter 8 numbers: ";        //Line 3

    for (int count = 0; count < 8; count++)     //Line 4
    {
        cin >> num;                             //Line 5
        numList.insertEnd(num);                 //Line 6
    }

    cout << endl;                               //Line 7

    cout << "Line 8: numList: ";                //Line 8
    numList.print();                            //Line 9
    cout << endl;                               //Line 10

    cout << "Line 11: Enter the number to be " 
         << "deleted: ";                        //Line 11
    cin >> num;                                 //Line 12
    cout << endl;                               //Line 13

    numList.remove(num);                        //Line 14
    cout << "Line 15: After removing " << num
         << " numList: ";                       //Line 15
    numList.print();                            //Line 16
    cout << endl;                               //Line 17
 
    cout << "Line 18: Enter the search item: "; //Line 18

    cin >> num;                                 //Line 19
    cout << endl;                               //Line 20

    if (numList.seqSearch(num) != -1)           //Line 21
        cout << "Line 22: " << num 
             << " found in numList." << endl;   //Line 22
    else                                        //Line 23
        cout << "Line 24: " << num 
             << " is not in numList." << endl;  //Line 24

    return 0;                                   //Line 25
}
