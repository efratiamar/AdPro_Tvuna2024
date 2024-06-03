#pragma once

#include <cmath>

class Point
{
	float x;
	float y;

public:
	Point() : x(0), y(0) {};
	Point(float _x, float _y) : x(_x), y(_y) {};

	float getX() const;
	void setX(float _x) { x = _x; };

	float getY() const { return y; };
	void setY(float _y) { y = _y; };

	float distance(const Point& p) const;

	//cout << p
	//fout << p

	friend ostream& operator<<(ostream& os, const Point& p);

	friend istream& operator>>(istream& is, Point& p);

	friend class Circle;


};


float Point::getX() const
{
	return x;
};

float Point::distance(const Point& p) const
{
	float xp = p.getX();
	return sqrt(pow(x - xp, 2) + pow(y - p.getY(), 2));
}

//cout << p
ostream& operator<<(ostream& os, const Point& p)
{
	os << "(" << p.x << "," << p.y << ")"; //(5,6)
	return os;
}

//cin >> p;
//fin >> p; //(5,6)
istream& operator>>(istream& is, Point& p)
{
	char tmp;
	is >> tmp >> p.x >> tmp >> p.y >> tmp;
	return is;
}


