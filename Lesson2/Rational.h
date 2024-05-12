#include <iostream >
using namespace std;

class Rational
{
	int mone = 1;
	int mechane = 1;

public:
	Rational() {};//1/1
	Rational(int _mo, int _me) : mone(_mo), mechane(_me) {};

	void print() { cout << mone << "/" << mechane << '\n'; };
	
	void setMone(int _mo) { mone = _mo; };
	void setMechane(int _me)
	{
		if (mechane > 0)
			mechane = _me;
	};

	int getMone() const;
	int getMechane() const;
	
	void mult1(const Rational& num);

	void mult2(const Rational& num) const;
};






