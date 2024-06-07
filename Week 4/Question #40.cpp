#include <iostream>
#include "unorderedArrayListType.h" 
#include <cassert>

using namespace std; 

int main() 
{ 
    unorderedArrayListType intList1(50);
    unorderedArrayListType intList2(5000);
    unorderedArrayListType intList3(-10);  

    intList1.print();
    
    intList2.print();
    
    intList3.print();
    
}
