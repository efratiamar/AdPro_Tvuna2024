#pragma once
#include "Shape.h"

class Circle :public Shape
{
private:
	int radius;
	int center_x, center_y;
public:
	Circle(int r, int x, int y);
	float area();
	void details();
};



