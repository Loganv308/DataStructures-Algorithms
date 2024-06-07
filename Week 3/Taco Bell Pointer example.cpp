#include <iostream>
#include <String>

#define LOG(x) std::cout << x << std::endl

using namespace std;

int ptrExample();
int exampleTaco();

int main()
{
    ptrExample();
}

int exampleTaco()
{
    string taco = "Taco Bell"; // Defualt String

    string *tbellprt = &taco; // Creating pointer for Taco variable

    LOG(taco); // "Taco Bell"

    *tbellprt = "123 Taco Ave, Plymouth WI"; // Assigning string to pointer

    LOG(*tbellprt); // 123 Taco Ave, Plymouth WI

    LOG(&taco); // 0x61fef0 (Memory Address)
}

int ptrExample()
{
    int x = 9; // Initialized variable
    int *ptr;

    LOG(x); // Output is 9 (Before pointer change)

    ptr = &x;

    *ptr = 8; // Dereferences pointer

    LOG(x); // Output is 8
    LOG(ptr); // Returns memory address
    LOG(*ptr); //
}