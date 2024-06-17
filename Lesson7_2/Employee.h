#pragma once
#include <iostream>
using namespace std; 
#include "Person.h"

class Employee : public Person
{
private:
    double salary;
public:
    Employee(string fName = "", string lName = "", double sal = 0.0);
    void setSalary(double sal);
    void addBonus(double bonus);
    void print();
    void congratulate();
};
