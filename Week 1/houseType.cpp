#include <iostream>
#include "houseType.h"

using namespace std;

int main()
{
    houseType house1(4, 2, 3, 2012, 2000, 100000.00, 10000.00); // Bedrooms, bathrooms, carsGarage, yearBuilt, squareFootage, price, and tax.

    cout << "House #1 has a price of: $" <<  house1.getPrice() << endl;
    cout << "House #1 has a Square Footage of: " <<  house1.getSquareFootage() <<" Sq. ft "<< endl;
    cout << "House #1 has: " << house1.getNumOfBathrooms() << " Total Bathrooms" << endl;
    
    house1.setBathrooms(3);

    cout << "House #1 has: " << house1.getNumOfBathrooms() << " Total Bathrooms" << endl;

    return 0;
}