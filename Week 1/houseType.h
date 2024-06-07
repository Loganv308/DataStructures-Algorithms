#ifndef HOUSETYPE_H_INCLUDED
#define HOUSETYPE_H_INCLUDED

using namespace std;

class houseType
{
    private: // int numOfBedrooms, int numOfBathrooms, int numOfCarsGarage, int yearBuilt, int finishedSquareFootage, double price, double tax
        int numOfBedrooms;
        int numOfBathrooms;
        int numOfCarsGarage;
        int yearBuilt;
        int finishedSquareFootage;
        double price;
        double tax;
    public:
        houseType() // Initializes Bedrooms, bathrooms, carsGarage, yearBuilt, squareFootage, price, and tax.
        {
            numOfBedrooms = 0;
            numOfBathrooms = 0;
            numOfCarsGarage = 0;
            yearBuilt = 0;
            finishedSquareFootage = 0;
            price = 0.0;
            tax = 0.0; }
        
        houseType(int bed, int bath, int gar, int year, int sqft, float prc, float tx)
        {
            numOfBedrooms = bed;
            numOfBathrooms = bath;
            numOfCarsGarage = gar;
            yearBuilt = year;
            finishedSquareFootage = sqft;
            price = prc;
            tax = tx;
        }
        
        // Mutator Functions
        void setBedrooms(int bed)
        { numOfBedrooms = bed; }

        void setBathrooms(int bath)
        { numOfBathrooms = bath; }

        void setCarGarage(int gar)
        { numOfCarsGarage = gar; }

        void setYear(int year)
        { yearBuilt = year; }
        
        void setSquareFootage(int sqft)
        { finishedSquareFootage = sqft; }

        void setPrice(float prc)
        { price = prc; }

        void setTax(float t)
        { tax = t; }

        // Accessor Functions
        int getNumOfBedrooms() const
        { return numOfBedrooms; }

        int getNumOfBathrooms() const
        { return numOfBathrooms; }

        int getNumOfCarsGarage() const
        { return numOfCarsGarage; }

        int getYearBuilt() const
        { return yearBuilt; }

        int getSquareFootage() const
        { return finishedSquareFootage; }

        float getPrice() const
        { return price; }

        float getTax() const
        { return tax; }
};

#endif

