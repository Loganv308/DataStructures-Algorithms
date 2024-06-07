#ifndef H_OrderedListType
#define H_OrderedListType

#include <iostream>
#include "arrayListType.h"

using namespace std;

template<class elemType>
class orderedArrayListType: public arrayListType<elemType>
{
public:
        void insertOrd(const elemType&);
        
        int binarySearch(const elemType& item) const;

        int binSearchEx(const elemType& item);

        int binSeqSearch15(const elemType& item);

        orderedArrayListType(int size = 100);

        int seqSearch15(const elemType& item, int first, int last);

        int noOfComparisons() const;
        void initializeNoOfComparisons();

private:
        int comparisons;
};

template <class elemType>
void orderedArrayListType<elemType>::insertOrd(const elemType& item)
{
    int first = 0;
    int last = this->length - 1;
    int mid;

    bool found = false;

    if (this->length == 0)   //the list is empty
    {
        this->list[0] = item;
        this->length++;
    }
    else if (this->length == this->maxSize)
        cerr << "Cannot insert into a full list." << endl;
    else
    {
        while (first <= last && !found)
        {
            mid = (first + last) / 2;

            if (this->list[mid] == item)
                found = true;
            else if (this->list[mid] > item)
                last = mid - 1;
            else
                first = mid + 1;
        }//end while

        if (found)
            cerr << "The insert item is already in the list. "
                 << "Duplicates are not allowed." << endl;
        else
        {
            if (this->list[mid] < item)
                mid++;

            insertAt(mid, item);
        }
    }
}//end insertOrd

template<class elemType> int orderedArrayListType<elemType>::binarySearch
                                           (const elemType& item) const
{
    int first = 0;
    int last = this->length - 1;
    int mid;

    bool found = false;

    while (first <= last && !found)
    {
        mid = (first + last) / 2;

        if (this->list[mid] == item)
            found = true;
        else if (this->list[mid] > item)
            last = mid - 1;
        else
            first = mid + 1;
    }

    if (found) 
        return mid;
    else
        return 1;
}//end binarySearch

template<class elemType>
int orderedArrayListType<elemType>::binSearchEx(const elemType& item)
{

    cout << "Write the definition of the function binSearchEx (bineary search with the number of comparisons)"
         << endl;

    return 0;
}

template<class elemType>
int orderedArrayListType<elemType>::binSeqSearch15(const elemType& item)
{

    cout << "Write the definition of the function binSeqSearch15 (bineary search for size > 15; switch to seqSearch15 otherwise)"
         << endl;

    return 0;

}


template<class elemType>
int orderedArrayListType<elemType>::seqSearch15(const elemType& item,
                                                                                                int first, int last)
{
    cout << "Write the definition of the function seqSearch"
         << endl;

    return 0;

}

template<class elemType>
int orderedArrayListType<elemType>::noOfComparisons() const
{
        return comparisons;
}

template<class elemType>
void orderedArrayListType<elemType>::initializeNoOfComparisons()
{
        comparisons = 0;
}


template<class elemType>
orderedArrayListType<elemType>::orderedArrayListType(int size)
   : arrayListType<elemType>(size)
{
}

#endif