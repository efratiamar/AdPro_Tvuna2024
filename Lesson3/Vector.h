#pragma once
#include <iostream>
using namespace std;

class Vector
{
	int* numbers;
	int capacity;
public:
	Vector(int _cap = 10);
	Vector(const Vector& v2);
	Vector(Vector&& v2);
	~Vector();

	int getCapacity() const;
	void print();
	void setValue(int pos, int val);
};