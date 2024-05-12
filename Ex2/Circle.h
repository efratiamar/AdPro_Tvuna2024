#include "Point.h"

const float PI = 3.14;

class Circle
{
	Point center;
	float radius;
public:
	Circle(float _r = 1, float _x = 0, float _y = 0 ) //: radius(_r)
	{
		center.setX(_x);
		center.setY(_y);
		setRadius(_r);

		//if (_r >= 0)
		//	radius = _r;
		//else
		//	radius = 1;
	}

	Circle(const Circle& right)
	{
		center.setX(right.getCenter().getX());
		center.setY(right.getCenter().getY());
		radius = right.getRadius();
	}

	void setCenter(const Point& p)
	{
		center.setX(p.getX());
		center.setY(p.getY());
	};

	void setCenter(float _x, float _y)
	{
		center.setX(_x);
		center.setY(_y);
	}

	void setRadius(float _r)
	{
		if (_r >= 0)
			radius = _r;
		else
			radius = 1;
	}

	float getRadius() const { return radius; };
	Point getCenter() const { return center; };

	float area() { return PI * radius * radius; };
	float perimeter() { return 2 * PI * radius; };

	int inOutOn(const Point& p) const
	{
		float d = p.distance(center);
		//float d = center.distance(p); //same

		if (d > radius) //out
			return 1;
		if (d < radius)
			return -1; //in
		return 0; //on
	}

};