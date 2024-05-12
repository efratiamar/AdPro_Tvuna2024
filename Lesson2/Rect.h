#include <iostream>
using namespace std; 

class  Rect
{
public:
    int length;
    int width;

    Rect() : length(5), width(10)
    {};

    Rect(int _l, int _w) : length(_l), width(_w) {};

    void printArea();
    void printArea(int x, int y=9, int z=8);
};


