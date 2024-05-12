#include "Point.h"

float Point::distance(const Point& right) const
{
	//x = 5; //err
	return sqrt(pow(x - right.getX(), 2) + pow(y - right.getY(), 2));
}