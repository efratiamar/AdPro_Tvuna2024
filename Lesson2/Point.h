#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
    int x = 0;
    int y;
public:
    Point() { y = 0; } //ctor
    Point(int X, int Y) : x(X), y(Y) { } //ctor 2

    Point(const Point& p) //copy ctor
    {
        x = p.getX();
        y = p.getY();
    }
    int getX() const 
    { 
        //x = 7; //error
        return x; 
    }
    int getY() const { return y; }
    void print() { cout << '(' << x << ',' << y << ")\n"; }
};
