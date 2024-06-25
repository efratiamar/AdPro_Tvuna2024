#pragma once
#include "Shape.h"

class Triangle :public Shape
{
private:
	int a, b, c;
public:
	Triangle(int a, int b, int c);
	float area();
	void details();
};

