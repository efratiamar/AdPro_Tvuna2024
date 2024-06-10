#include "Student.h"

int Student::numOfStudents = 0;
int Student::numOfFails = 0;

Student::Student(const char* n)
{
    strcpy_s(name, n);
    grade = 0;
    numOfStudents++;
}

Student::~Student()
{
    numOfStudents--;

    if (grade < 55)
        numOfFails--;
}

void Student::SetGrade(int g)
{
    grade = g;
    if (grade < 55)
        numOfFails++;
}

void Student::PercentageOfFailers()
{
    //grade = 6;//comp errro!!
    if (numOfStudents != 0)
        cout << (float)numOfFails / numOfStudents * 100 << "% of failures\n";
    else
        cout << "0 % of failures\n";
    
    //cout << grade << endl; //compilation error!!
}
