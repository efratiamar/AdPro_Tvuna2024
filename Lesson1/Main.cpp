#include "Rational.h"

#include <iostream>
using namespace std;

void f1(int x);

class Rect
{

public:
    int length;
    int width;

    void printArea2();

    void printArea1(int x)
    {
        int a = x;
        cout << length * width << endl;
    };
};

void Rect::printArea2()
{
    cout << length * width << endl;
}

int main()
{
    //Rect r1;
    //r1.length = 5;
    //r1.width = 8;
    //r1.printArea1(6);
    ////cout << r1.length * r1.width

    Rational rt1;
    //rt1.mone = 4;
    rt1.setMone(4);
    //rt1.mechane = 8;
    rt1.setMechane(8);

    rt1.print();

    float f = rt1.reduce(2);

    rt1.reduce2();
    rt1.print();
    cout << rt1.getMechane() << endl;

    Rational rt2;
    //int m;
    //cin >> m;
    rt2.setMone(5);
    rt2.setMechane(7);

    rt1.mult(rt2);

    bool b = rt2.equal(rt1);

    rt2.makeEquals(rt1);
        
    f1(4);
}

void f1(int x)
{

}
