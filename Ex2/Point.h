#pragma once

#include <cmath>

class Point
{
	float x;
	float y;
public:
	Point(float _x = 0, float _y = 0) 
		: x(_x), y(_y) 
	{
		//x = _x;
		//y = _y;
	};

	void setX(float _x) { x = _x; }
	void setY(float _y) { y = _y; }

	float getX() const { return x; };
	float getY() const { return y; };

	float distance(const Point& right) const;

};