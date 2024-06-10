#pragma once
#include <iostream>
using namespace std;

enum options { STOP, ADD, SUB, MULT, DIV };

class Calculator
{
public:
	static int add(int, int);
	static int sub(int, int);
	static int mult(int, int);
	static float div(int, int);
};

int Calculator::add(int a, int b)
{
	return a + b;
}

int Calculator::sub(int a, int b)
{
	return a - b;
}
int Calculator::mult(int a, int b)
{
	return a * b;
}
float Calculator::div(int a, int b)
{
	if (!b)  throw "cannot divid by zero\n";
	return (float)a / b;
}
