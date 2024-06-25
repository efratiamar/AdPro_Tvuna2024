#include <iostream>
using namespace std;

#include "Numbers.h"
#include "Strings.h"

int main1()
{
	Numbers nums(5);
	cout << "Print Before Sort:\n";
	nums.print();
	nums.bubbleSort();
	cout << "Print After Sort:\n";
	nums.print();

	Strings words("Sara", "Rivka", "Rachel", "Leah");
	cout << "Print Before Sort:\n";
	words.print();
	words.bubbleSort();
	cout << "Print After Sort:\n";
	words.print();
	return 0;
}


#include <iostream>
using namespace std;

class myException1 : public exception
{
	virtual const char* what() const throw()
	{
		return "My exception 1 happened";
	}
};

class myException2 : public exception
{
	virtual const char* what() const throw()
	{
		return "My exception 2 happened";
	}
};


#include <iostream>
using namespace std;

class A
{
public:
	void show1() { cout << "-A1-"; }
	virtual void show2() { cout << "-A2-"; }
};

class B : public A
{
public:
	void show1() { cout << "-B1-"; }
	void show2()
	{
		cout << "-B2-";
		A::show2();
	}
};

int main()
{
	try
	{
		A* pA = new A;
		throw pA;
			
		//pB = pA;
	}
	catch (B* x)
	{
		x->show1(); //A1

		x->show2(); //B2 - -A2 -
	}
}
