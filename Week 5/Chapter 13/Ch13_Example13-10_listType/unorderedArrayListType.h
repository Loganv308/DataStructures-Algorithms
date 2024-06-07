#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType
 
#include "arrayListType.h"
   
template <class elemType> 
class unorderedArrayListType: public arrayListType<elemType>
{
public:
    void insertAt(int location, const elemType& insertItem);
    void insertEnd(const elemType& insertItem);
    void replaceAt(int location, const elemType& repItem);
    int seqSearch(const elemType& searchItem) const;
    void remove(const elemType& removeItem);

    unorderedArrayListType(int size = 100);
      //Constructor
}; 

template <class elemType>
void unorderedArrayListType<elemType>::insertAt(int location, 
                                         const elemType& insertItem)
{
    cout << "See Programming Exercise 20." << endl;
} //end insertAt

template <class elemType>
void unorderedArrayListType<elemType>::insertEnd
                                 (const elemType& insertItem)
{
    if (length >= maxSize)  //the list is full
        cout << "Cannot insert in a full list." << endl;
    else
    {
        list[length] = insertItem; //insert the item at the end
        length++; //increment the length
    }
} //end insertEnd

template <class elemType>
int unorderedArrayListType<elemType>::seqSearch
                            (const elemType& searchItem) const
{
    int loc;
    bool found = false;

    for (loc = 0; loc < length; loc++)
        if (list[loc] == searchItem)
        {
            found = true;
            break;
        }

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch

template <class elemType>
void unorderedArrayListType<elemType>::remove
                               (const elemType& removeItem)
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

template <class elemType>
void unorderedArrayListType<elemType>::replaceAt(int location, 
                                       const elemType& repItem)
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be "
             << "replaced is out of range." << endl;
    else
        list[location] = repItem;
} //end replaceAt 

template <class elemType>
unorderedArrayListType<elemType>::
                       unorderedArrayListType(int size)
                       : arrayListType<elemType>(size)
{
}  //end constructor


#endif
