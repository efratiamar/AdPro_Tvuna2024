#pragma once
class Rect
{
	int width;
	int length;
public:
	Rect() { };
	Rect(int wid, int len) : width(wid), length(len) {};

	//r4 = r2 +r2
	Rect operator+(const Rect& right) const
	{
		Rect rNew (width + right.width, length + right.length);
		return rNew;
	}

	//r2+=r3
	Rect& operator+=(const Rect& right)
	{
		width += right.width;
		length += right.length;
		return *this;
	}

	//r2 += 6
	Rect& operator+=(const int x)
	{
		width += x;
		length += x;
		return *this;
	}
	
	//r2 == r3
	bool operator==(const Rect& right) const
	{
		return (width == right.width && length == right.length);
	}
	//r2 != r3
	bool operator!=(const Rect& right) const
	{
		return !(right == *this);
	}
};

int main()
{
	Rect r1, r2, r3;
	//..
	Rect r4 = r2 + r3;
	Rect r5 = r2.operator+(r3);

	Rect r6(4,5);
	r6 += r5;
	r6 += 5;
	
	r6 = r5 += r2;

	r1 += (r2 + r3); //compilation error

	if (r1 == r2)
		//...

	

	int a = 4, b = 8, c = 9;
	a = b + c;


}

