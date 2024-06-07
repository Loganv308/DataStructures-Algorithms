// Logan Velier
// 2/11/2022
// Intro to Data Structures

#include <iostream>
#include "unorderedArrayListType.h" 
#include <cassert>
#include <climits>

using namespace std; 

int main() 
{ 
    int arr[8];

    unorderedArrayListType intList(arr);  

    int number;
    int largest; 
    
    cout << "Enter 8 integers: "; 
    
    for (int count = 0; count < 8; count++) 
    { 
        cin >> number; 
        intList.insertEnd(number); 
    } 

    cout << endl;
        
    cout << "intList: "; 
    
    intList.print(); 
    
    cout << endl; 
    
    cout << "Enter the number to be "
        << "deleted: "; 
    
    cin >> number;
    
    cout << endl; 
    
    intList.remove(number); 
    
    cout << "After removing " << number
        << " intList: "; 

    intList.print();
    
    cout << "Enter the search item: ";
    cin >> number;
    cout << endl; 

    if (intList.retrieveAt(number) != 0) // Added the retrieveAt function.
    { 
        cout << "Line 29: " << number
        << " found in intList." << endl;
    }
    else 
    {
        cout << "Line 31: " << number
             << " is not in intList." << endl; 
    }

    cout << "Max number in array is: " << intList.max() << endl;

    return 0; 
}

