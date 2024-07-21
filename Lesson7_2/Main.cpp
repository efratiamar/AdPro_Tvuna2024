#include "Employee.h"

void sort(Person& p1, Person& p2)
{
    if (p1 < p2)
    {
        p1.print(); //print only the Person part
        p2.print(); //print only the Person part
    }
    else
    {
        p2.print(); //print only the Person part
        p1.print(); //print only the Person part
    }
}

int main()
{
    Person per1;
    per1.setFirstName("Sara");
    per1.setLastName("Cohen");
    per1.print();

    Employee emp1; 
    emp1.setFirstName("Rivka");
    emp1.setLastName("Levi");
    emp1.setSalary(3000);
    emp1.addBonus(500);
    emp1.print();
    emp1.Person::print();
    emp1.congratulate();

    //////////////////
    // Up casting
    
    Person per2("Sara", "Cohen");
    Employee emp2("Rivka", "Levi", 3000);

    per2 = emp2; //up casting is ok! but - only the Person part of emp2 is assigned!
    //emp2 = per2; //comp error
    per2.print(); //print only the Person part of emp2

    Person* p2;
    p2 = &per2; //no need for casting at all - ok!
    p2 = &emp2; //up casting is ok!
    p2->print(); //print only the Person part
    ((Employee*)p2)->print(); //print both Person and Employee parts
    //p2->congratulate(); //compilation error - p2 is point only to the Person part of emp2
    ((Employee*) p2)->congratulate(); //ok with explicit cast - since p2 is point to an Employee object
    
    sort(per2, emp2); //up casting - ok!

    //////////////////
    // Down casting

    Person per3("Sara", "Cohen");
    Employee emp3("Rivka", "Levi", 3000);
    
    Employee* pE3;
    //pE3 = &per3; //compilation error - down casting is not allowed!

    pE3 = (Employee*)&per3; //down casting is allowed only with explicit cast!
                            //but can cause a run time error
    pE3->print(); //run time error - will try to print the whole employee which no exist
}
