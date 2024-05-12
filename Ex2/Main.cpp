#include "Point.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
	Point p1(4,6);
	//p1.setX(5);
	//p1.setY(6);

	Point p2;
	p2.setX(2.5);
	p2.setY(6.7);

	Point p3(7); //7,0

	float d = p1.distance(p2);

	Circle c1; //1, 0, 0
	c1.setCenter(2, 3);
	c1.setRadius(6.7);

	Circle c2(2, 3, 6.7);

	Circle c3(c1);
	c3.setRadius(5);
	c3 = c2;

	Circle A, B, C;
	float r, x, y;
	
	cout << "Circle A: enter radios, x, y: ";
	cin >> r >> x >> y;
	A.setRadius(r);
	A.setCenter(x,y);

	cout << "Circle B: enter radios, x, y: ";
	cin >> r >> x >> y;
	B.setRadius(r);
	B.setCenter(x, y);

	cout << "Circle C: enter radios, x, y: ";
	cin >> r >> x >> y;
	C.setRadius(r);
	C.setCenter(x, y);


	cout << "Enter points values: x y. to stop enter 0 0: " << endl;
	float xp, yp;
	cin >> xp >> yp;
	
	Point p(xp, yp);
	int cntA = 0;
	int cntB = 0;
	int cntC = 0;

	while (p.getX() != 0 && p.getY() != 0)
	{
		if (A.inOutOn(p) <= 0)
			cntA++;
		if (B.inOutOn(p) <= 0)
			cntB++;
		if (C.inOutOn(p) <= 0)
			cntC++;

		cin >> xp >> yp;
		p.setX(xp);
		p.setY(yp);
	}
	cout << "A:" << cntA << " B:" << cntB << " C:" << cntC << endl;
}