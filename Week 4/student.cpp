#include <String>
#include <iostream>

using namespace std;

class personType
{
    public:
        virtual void print() = 0;
        virtual void calculateGPA() = 0;
};

class studentType: public personType
{
    public:
        void print();
        void calculateGPA();
        void setID(long id);
        void setCourses(const string c[], int noOfC);
        void setGrades(const char cG[], int noOfC);
        void getID();
        void getCourses(string c[], int noOfC);
        void getGrades(char cG[], int noOfC);
        studentType(string fName = "", string lastName = "",
        long id = -1, string *c = nullptr,
        char *cG = nullptr, int noOfC = 0);
    private:
        long studentId;
        string courses[6];
        char coursesGrade[6];
        int noOfCourses;
};