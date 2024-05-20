#include <iostream>
using namespace std; 
#include <ctime>

#include "Vector.h"

void update1(Vector v)
{
    v.print();
    int i = rand() % v.getCapacity();
    int val = rand() % 100;
    v.setValue(i, val);
    v.print();
}

void update2(Vector& v)
{
    v.print();
    int i = rand() % v. ();
    int val = rand() % 100;
    v.setValue(i, val);
    v.print();
}


Vector randomVector()
{
    int cap = rand() % 10 + 1;
    Vector v(cap);
    v.print();

    return move(v);
}

int main()
{
    srand((unsigned)time(nullptr));

    cout << "Test 1:\n";
    Vector vec1;
    vec1.setValue(4, 66);
    vec1.print();

    Vector vec2(23);
    Vector vec3(vec2); //<==> Vector vec3 = vec2;
    
    //update only the copy of the vector
    // and not the original vector
    update1(vec1);
    vec1.print();

    cout << "\nTest 2:\n";
    //updtae the original vector
    update2(vec1);
    vec1.print();

    cout << "\nTest 3:\n";
    Vector vec2 = randomVector();
    vec2.print();

    return 0;
}
