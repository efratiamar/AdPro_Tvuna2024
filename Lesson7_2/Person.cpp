#include "Person.h"

Person::Person(string fName, string lName)
{
    setFirstName(fName);
    setLastName(lName);
}

void Person::setFirstName(string fName)
{
    firstName = fName;
}

void Person::setLastName(string lName)
{
    lastName = lName;
}

void Person::print()
{
    cout << firstName << " " << lastName << endl;
}

bool Person::operator<(const Person& p2)
{
    string fullName1 = firstName + " " + lastName;
    string fullName2 = p2.firstName + " " + p2.lastName;

    return fullName1 < fullName2;
}