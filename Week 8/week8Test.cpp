#include <iostream>

using namespace std;

int multiply(int m, int n);

int main()
{
    cout << multiply(10, 20);
}

int multiply(int m, int n)
{
    if( m ==0 || n == 0) // Base Class
    {
       return 0;
    }
    if (n==1) // Recursive class
    {
        return m;
    }
    else
    {
        return m + multiply(m, n - 1);
    }
}