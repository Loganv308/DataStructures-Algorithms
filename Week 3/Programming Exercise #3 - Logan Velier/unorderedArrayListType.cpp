// Logan Velier
// 2/11/2022
// Intro to Data Structures

#include <iostream>
#include "unorderedArrayListType.h" 
#include <cassert>

using namespace std; 

int main() 
{ 
    unorderedArrayListType intList(25); 
    
    int number; 
    
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
    
    cout << endl; 
    cout << "Enter the search item: ";
    cin >> number;
    cout << endl; 
    
    if (intList.retrieveAt(number) != -1) // Added the retrieveAt function.
    {
    }
    else 
    {
        cout << "Line 31: " << number
             << " is not in intList." << endl; 
    }
    
    return 0; 
}