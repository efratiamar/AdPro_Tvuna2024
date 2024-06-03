#pragma once

#include <iostream>
using namespace std;
class Rational
{
    int mone;
    int mechane;
public:
    Rational(int myMone = 1, int myMechane = 1) :mone(myMone), mechane(myMechane) {}
    Rational(const Rational& num) :mone(num.getMone()), mechane(num.getMechane()) {}
    void setMone(int myMone) { mone = myMone; }
    void setMechane(int myMechane) { mechane = myMechane; }
    int getMone() const { return mone; }
    int getMechane() const { return mechane; }

	//r4 = r2 +r2
	Rational operator+(const Rational& num) const
	{
		Rational tmp;
		tmp.setMone(mone * num.getMechane() + num.getMone() * mechane);
		tmp.setMechane(mechane * num.getMechane());
		return tmp;
	}

	//r2+=r3
	Rational& operator+=(const Rational& num)
	{
		*this = *this + num;

		return *this;
	}

	//r2 += 6
	Rational& operator+=(const int x)
	{
		//...

		return *this;
	}

	//r2 == r3
	bool operator==(const Rational& right) const
	{
		return (mone == right.mone && mechane == right.mechane);
	}
	//r2 != r3
	bool operator!=(const Rational& right) const
	{
		return !(right == *this);
	}

	//r2 = r3 = r4;
	Rational& operator=(const Rational& right)
	{
		mone = right.mone;
		mechane = right.mechane;
		return *this;
	}
	Rational& operator++()
	{
		mone += mechane;
		return *this;
	}
	Rational operator++(int deme)
	{
		Rational temp = *this;
		mone += mechane;
		return temp;
	}

	int& operator[](int index)
	{
		if (index == 0)
			return mone;
		return mechane;
	}

	//r1 = r2 * r3
	Rational operator*(const Rational& r3)
	{
		Rational tmp(mone * r3.mone, mechane*r3.mechane);
		return tmp;
	}

	//r1 = r2 * 3
	Rational operator*(const int num)
	{
		Rational tmp(mone * num, mechane);
		return tmp;
	}

	//r1 = 3 * r2;

	friend Rational operator*(const int num, const Rational& r2);
	friend ostream& operator<< (ostream& os, const Rational& r2);
	friend istream& operator>>(istream& is, Rational& r2);

    void print() const { cout << mone << '/' << mechane << endl; }
};

//Rational.cpp
// 
//r1 = 3 * r2;
Rational operator*(const int num, const Rational& r2)
{
	Rational tmp(r2.mone * num, r2.mechane);
	return tmp;
}
//r1 = r2 = r3;
//cout << r1 << r2;
ostream& operator<< (ostream& os ,const Rational& r2)
{
	os << r2.mone << '/' << r2.mechane << endl;
	return os;
}

//cin >> r2 >> r1; // 2/4
istream& operator>>(istream& is, Rational& r2)
{
	//cout  enter mone etc.
	char slash;
	is >> r2.mone >> slash >> r2.mechane;
	return is;
}

