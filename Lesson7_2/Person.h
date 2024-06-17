#pragma once
#include <iostream>
using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
public:
    Person(string fName = "", string lName = "");
    void setFirstName(string fName);
    void setLastName(string lName);
    void print();
    bool operator<(const Person& p2);
};