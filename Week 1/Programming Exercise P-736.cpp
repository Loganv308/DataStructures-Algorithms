#include <iostream>

using namespace std;

class foodType
{
public:
    foodType();
    foodType(string, int, double, int, double, double);
    void print() const;
    string setName(string) const;
    int setCalories(int) const;
    double setFat(double) const;
    int setSugar(int) const;
    double setCarbohydrate (double) const;
    double setPotassium(double) const;
    
    
private:
    string name;
    int calories;
    double fat;
    int sugar;
    double carbohydrate;
    double potassium;
};

int main()
{
    foodType fruit1;
    foodType fruit2;

    fruit1.setName("Apple");
    fruit1.setCalories(20);
    fruit1.setFat(0);
    fruit1.setSugar(12);
    fruit1.setCarbohydrate(30);
    fruit1.setPotassium(2);
}