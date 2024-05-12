#include <iostream>
using namespace std;
#include "Rect.h"

//Rect::Rect() 
//    : length(5), width (10)
//{
//    //length = 5;
//    //width = 10;
//};
//
//Rect::Rect(int _l, int _w)
//    : length(_l)
//{
//    //length = _l;
//    width = _w;
//}

void Rect::printArea()
{ 
    cout << length * width;
};

void Rect::printArea(int x, int y, int z)
{
    cout << (length * width ) / x;
};