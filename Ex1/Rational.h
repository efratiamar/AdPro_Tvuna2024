#pragma once

class Rational
{
private:
	int mone;
	int mechane;

public:

	void setMone(int mo) { mone = mo; };
	int getMone() { return mone; };

	void setMechane(int me)
	{ 
		if (me != 0)
			mechane = me;
		else
			mechane = 1;
	};	
	int getMechane() { return mechane; };


	void print();
	float reduce(float r);
	void reduce2();

	void mult(Rational right);

};
