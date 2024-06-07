#include <iostream>
#include <iomanip>
#include "myStack.h"
#include "stackADT.h"

using namespace std;

int main()
{
	stackType<int> stack1(12);
	stackType<int> stack2(15);
	
    cout << "Inserting elements 5, 10, 15 ... to both the stacks." << endl;
	
    for (int i = 5; i < 50; i += 5)
		stack1.push(i);

	stack1.reverseStack(stack2);

	cout << "The elements in the first stack are:\n\t";
	
    while (!stack1.isEmptyStack())
	{
		cout << stack1.top() << " ";
		stack1.pop();
        
	}
    cout << endl;
	
    cout << "The elements in the second stack are:\n\t";
	
    while (!stack2.isEmptyStack())
	{
		cout << stack2.top() << " ";
	    stack2.pop();
	}
    return 0;
}