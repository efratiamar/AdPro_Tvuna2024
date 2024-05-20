#include <iostream>
using namespace std;
#include "Vector.h"

Vector randomVector()
{
    int cap = rand() % 10 + 1;
    Vector v(cap); //ctor
    //v.print();

    return move(v); //move ctor
}

int main()
{
	Vector v1; //ctor
	Vector v2(v1); //copy ctor
    Vector v3 = v2; //copy ctor

    Vector v4 = randomVector(); //move ctor

    v1.addLast(10);
    v1.addLast(11);
    v1.addLast(12);
    v1.addLast(13);
    if (!v1.isEmpty())
        cout << v1.lastValue(); //13
    if (!v1.isEmpty())
        v1.removeLast(); //remove 13
    if (!v1.isEmpty())
        cout << v1.lastValue(); //12

    v1.print(); //10 11 12 
    v1.addLast(6);
    v1.print(); //10 11 12 6
    v1.sort();
    v1.print(); // 6 10 11 12

    cout << v1.at(2); //11
    v1.clear();
    v1.print(); //nothing

    ///////
}