#include "Employee.h"

Employee::Employee(string fName, string lName, double sal)
    : Person(fName, lName)
{
    setSalary(sal);
}
void Employee::setSalary(double sal)
{
    salary = sal;
}

void Employee::addBonus(double bonus)
{
    salary += bonus;
}
void Employee::print()
{
    Person::print();
    cout << "Salary: " << salary << endl;
}
void Employee::congratulate()
{
    cout << "Happy Birthday " << firstName << '\n';
    addBonus(200);
    print();
}