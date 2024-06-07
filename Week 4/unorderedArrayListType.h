// Logan Velier
// 2/11/2022
// Intro to Data Structures

#include <iostream>
#include "arrayListType.h"

using namespace std;

class unorderedArrayListType: public arrayListType
{
    public:
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void remove(int removeItem);
    unorderedArrayListType(int a[]): arrayListType(a){}
    int max()
    {
        int large = 0;
        for(int j = 0; j < 5; j++)
        {
            if(large < arr[j])
                large=arr[j];
        }
        return large;
    }
    //Constructor
};

void unorderedArrayListType::insertAt(int location, int insertItem)
{
    if (location < 0 || location >= maxSize)
        cout << "The position of the item to be inserted "
        << "is out of range." << endl;
    else if (length >= maxSize)//list is full
        cout << "Cannot insert in a full list. " << endl;
    else
    {
        for (int i = length; i > location; i--)
        {
            list[i] = list[i - 1]; //move the elements down
            list[location] = insertItem; //insert the item at the specified position
            length++; //increment the length
        }
    }
} //end insertAt

void unorderedArrayListType::insertEnd(int insertItem)
{
    if (length >= maxSize)//the list is full
        cout << "Cannot insert in a full list." << endl;
    else
    {
        list[length] = insertItem; //insert the item at the end
        length++; //increment the length
    }
} //end insertEnd

int unorderedArrayListType::seqSearch(int searchItem) const
{
    int loc;
    bool found = false;
    loc = 0;
    while (loc < length && !found)
    if (list[loc] == searchItem)
        found = true;
    else
        loc++;
    if (found)
        return loc;
    else
        return -1;
} //end seqSearch

void unorderedArrayListType::remove(int removeItem)
{
int loc;
    if (length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
    loc = seqSearch(removeItem);
        if (loc != -1)
            removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
            << endl;
    }
} //end remove

void unorderedArrayListType::replaceAt(int location, int repItem)
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be "
        << "replaced is out of range." << endl;
    else
        list[location] = repItem;
} //end replaceAt


