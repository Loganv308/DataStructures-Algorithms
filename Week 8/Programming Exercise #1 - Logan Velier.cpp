#include <iostream>

using namespace std;

void recursive()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n > 0) // Base class
    {
    }
    else // Recursive class
    {
        cout << "Number cannot be negative." << endl;
        recursive();
    } 
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            cout << "*";
        }
        cout << " " << endl;
    }

    for (int i = n -1; i >= 0; i--) 
    {
        for (int j = i; j < n; j++) 
        {
            cout << "*";
        }
    cout << "*" << endl;
}
    
}

int main()
{
    recursive(); // Triggers the recursive function
}
