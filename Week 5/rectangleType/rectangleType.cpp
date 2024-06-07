// Logan Velier
// Intro to Data Structures
// 2/23/2022

#include <iostream>
#include "rectangleType.h"

using namespace std;

int main()
{
    rectangleType rectangle1(10, 5);
    rectangleType rectangle2(8, 7);
    rectangleType rectangle3;
    rectangleType rectangle4;

    cout << "rectangle1: " << rectangle1 << endl;

    cout << "rectangle2: " << rectangle2  << endl;

    rectangle3 = rectangle1 + rectangle2;
    
    cout << "rectangle3: " << rectangle3 << endl;

    rectangle4 = rectangle1 * rectangle2;
    
    cout << "rectangle4: " << rectangle4 << endl;

    if (rectangle1 > rectangle2)
        cout << "Area of rectangle1 is greater than the area "
             << "of rectangle2 ." << endl;
    else
        cout << "Area of rectangle1 is less than or equal to the area "
             << "of rectangle2 ." << endl;     

	rectangle1++;

	cout << "After increment the length and width of "
		 << "rectangle1 by one unit, \nrectangle1: " 
         << rectangle1 << endl;

	rectangle4 = ++rectangle3;

	cout << "New dimension of rectangle3: " << rectangle3 << endl;
	cout << "New dimension of rectangle4: " << rectangle4 << endl;

    return 0;
}


#include <iostream>
#include <cassert>
 
#include "rectangleType.h"
 
using namespace std;

void rectangleType::setDimension(double l, double w)
{
    if (l >= 0)
        length = l;
    else
        length = 0;

    if (w >= 0)
        width = w;
    else
        width = 0;
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth()const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
    return 2 * (length + width);
}

rectangleType::rectangleType(double l, double w)
{
    setDimension(l, w);
}

rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}

rectangleType rectangleType::operator++()
{
    ++length;
    ++width;

    return *this;
}

rectangleType rectangleType::operator++(int u)
{
    rectangleType temp = *this;
        
    length++;
    width++;

    return temp;
}

rectangleType rectangleType::operator--()
{
    assert(length != 0 && width != 0);
    --length;
    --width;

    return *this;
}

rectangleType rectangleType::operator--(int u)
{
    rectangleType temp = *this;
                                
    assert(length != 0 && width != 0);
    length--;
    width--;

    return temp;
}

rectangleType rectangleType::operator+ 
                          (const rectangleType& rectangle) const
{
    rectangleType tempRect;

    tempRect.length = length + rectangle.length;
    tempRect.width = width + rectangle.width;

    return tempRect;
}

rectangleType rectangleType::operator- 
                          (const rectangleType& rectangle) const
{
    rectangleType tempRect;

    assert(length >= rectangle.length &&
           width >= rectangle.width);

    tempRect.length = length - rectangle.length;
    tempRect.width = width - rectangle.width;

    return tempRect;
}

rectangleType rectangleType::operator*(const rectangleType& rectangle) const
{
    rectangleType tempRect;

    tempRect.length = length * rectangle.length;
    tempRect.width = width * rectangle.width;

    return tempRect;
}

bool rectangleType::operator== 
                      (const rectangleType& rectangle) const
{
    return (area() == rectangle.area());
}

bool rectangleType::operator!= 
                       (const rectangleType& rectangle) const
{
    return (area() != rectangle.area());
}

bool rectangleType::operator<= 
                       (const rectangleType& rectangle) const
{
    return (area() <= rectangle.area());
}

bool rectangleType::operator< 
                       (const rectangleType& rectangle) const
{
    return (area() < rectangle.area());
}

bool rectangleType::operator>= 
                       (const rectangleType& rectangle) const
{
    return (area() >= rectangle.area());
}

bool rectangleType::operator>
                       (const rectangleType& rectangle) const
{
    return (area() > rectangle.area());
}

ostream& operator<<(ostream& osObject, 
                      const rectangleType& rectangle)
{
    osObject << "Length = "  << rectangle.length 
             << "; Width = " << rectangle.width;

    return osObject;
}

istream& operator>>(istream& isObject, rectangleType& rectangle)
{
    isObject >> rectangle.length >> rectangle.width;

    return isObject;
}