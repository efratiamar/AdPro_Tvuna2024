#pragma once
#include "Shape.h"

class Square :public Shape
{
private:
	int side;
public:
	Square(int s);
	float area();
	void details();
};
