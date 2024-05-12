#include "Rational.h"

#include <iostream>
using namespace std;

void Rational::print()
{
	cout << mone << "/" << mechane << endl;
	cout << "vdvdds" << endl;

};

float Rational::reduce(float r)
{
	return (mone / r) / (mechane / r);
};

void Rational::reduce2()
{
	mone = mone / 2;
	mechane = mechane / 2;
}

void Rational::mult(Rational right)
{
	cout << mone * right.getMone() / mechane * right.getMechane() << endl;
}


