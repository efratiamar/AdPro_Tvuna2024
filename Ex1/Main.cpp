#include "Rational.h"

#include <iostream>
using namespace std;

void func(int* arr, int x, int& y)
{
	int f = x + y;

	cout << f * y;
}

int main()
{
	int a = 8;
	int b = 7;
	int d = a + b;

	int vec[4] = { 10,11,12,13 };
	int* vec2 = new int[4] {5, 6, 7, 8};

	func(vec, a,b);


	Rational  num1, num2;
	num1.setMone(2);
	num1.setMechane(4);
	num2.setMone( 3);
	num2.setMechane( 6);
	num1.print();
	num2.print();
	return 0;

}
