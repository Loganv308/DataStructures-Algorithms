// Logan Velier
// 2/11/2022
// Intro to Data Structures

#ifndef ARRAYLISTTYPE_H
#define ARRAYLISTTYPE_H

#include <cassert>
#include <iostream>

using namespace std;

class arrayListType
{
    public:

        bool isEmpty() const
        {
            return (length == 0);
        } //end isEmpty

        bool isFull() const
        {
            return (length == maxSize);
        } //end isFull

        int listSize() const
        {
            return length;
        } //end listSize

        int maxListSize() const
        {
            return maxSize;
        } //end maxListSize

        void print() const
        {
            for (int i = 0; i < length; i++)
            {
                cout << list[i] << " ";
                cout << endl;
            }
        } //end print

        bool isItemAtEqual(int location, int item)const
        {
            if (location < 0 || location >= length)
        {
            cout << "The location of the item to be removed "
            << "is out of range." << endl;
            return false;
        }
            else
            return (list[location] == item);
        } //end isItemAtEqual

        void removeAt(int location)
        {
            if (location < 0 || location >= length)
                cout << "The location of the item to be removed "
                << "is out of range." << endl;
            else
            {
                for (int i = location; i < length - 1; i++)
                list[i] = list[i + 1];
                length--;
            }
        } //end removeAt

        int retrieveAt(int location) const
        {
            int retItem = 0;
            
            if(location < 0 || location >= length)
            {
                retItem = list[location];
            }
            cout << "Number is located at: " << list[location] << endl;
            return retItem;
        
        } //end retrieveAt

        void clearList()
        {
            length = 0;
        } //end clearList

        arrayListType(int size)
        {
            if (size <= 0)
            {
                cout << "The array size must be positive. Creating "
                << "an array of the size 100." << endl;
                maxSize = 100;
            }
            else
            {
                maxSize = size;
                length = 0;
                list = new int[maxSize];
            }
        } //end constructor

        ~arrayListType()
        {
            delete [] list;
        } //end destructor

       arrayListType(const arrayListType& otherList)
        {
            maxSize = otherList.maxSize;
            length = otherList.length;
            list = new int[maxSize]; //create the array
            for (int j = 0; j < length; j++) //copy otherList
                list [j] = otherList.list[j];
        }//end copy constructor
        
        protected:
            int *list; //array to hold the list elements
            int length; //variable to store the length of the list
            int maxSize; //variable to store
};

#endif