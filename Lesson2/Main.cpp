#include <iostream>
using namespace std;
#include "Rect.h"
#include "Rational.h"
#include "point.h"


void f()
{
	Point p1;//ctor
	Point p2(2, 8);//ctor 2
	Point p3(p2);//copy ctor

	cout << "p1: ";
	p1.print(); //0,0
	cout << "p2: ";
	p2.print(); //2,8
	cout << "p3: ";
	p3.print(); //2,8
}

int main()
{
	Rect rec; //0,0
	rec.printArea();
	rec.length = 5;
	rec.width = 8;

	Rect rec2(3, 6); //3,6
	rec2.printArea(); //18
	rec2.length = 9;
	rec2.width = 7;

	//Rect rec3(4); //4,0


	Rational num2(5, 4); // 5/4
	Rational num3; // 1/1
	num3.setMone(5);
	num3.setMechane(10);

	Rational num4;
	num4.setMone(6);
	num4.setMechane(7);

	num3.mult1(num4);

	num3.mult2(num4);
}