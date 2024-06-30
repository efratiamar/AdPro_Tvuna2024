#pragma once
#include<iostream>
using namespace std;

class Shape
{
protected:
	string name;
public:
	Shape(string n);
	virtual float area() = 0;
	virtual void details() = 0;
	void print();
	virtual ~Shape() {};
};