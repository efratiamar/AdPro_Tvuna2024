#include <iostream>
using namespace std; 

class A
{
public:
	virtual void print1() { cout << "A–print1"; }
	virtual void print2() { cout << "A–print2"; }
	virtual void print3() { cout << "A–print3"; }
};

class B : public A
{
public:
	void print1() { cout << "B–print1"; }
	virtual void print2() { cout << "B–print2"; }
	void bFunction() { cout << "B–func1"; }
	void print3()
	{
		A::print3(); //A-print3
		cout << "B-print3";
	}

};

class C : public B
{
public:
	void print1() { cout << "C–print1"; }
	void print2() { cout << "C–print2"; }
};

void Test1()
{
	A a;
	A* pA = &a;
	pA->print1();   // A-print1

	B* pB = new B;
	pB->print1();   // B-print1

	B b;
	A* pA2 = &b;
	pA2->print1();   // B-print1!!!!
	//pA2->bFunction(); //compilation error!!
}

void func1(A a2) //copy ctor
{
	a2.print1();
}
void func2(A& a2) //copy ctor does not called!!
{
	a2.print1();
}

void Test2()
{
	A a;
	B b;

	a = b; //assignment operator
	a.print1(); //A-print1

	A a1(b); //copy ctor
	a1.print1(); //A-print1

	func1(b); //A-print1
	func2(b); //B-print1

	A* pa1 = new B;
	pa1->print1();//B-print1

	A* pa2 = &b;
	pa2->print1(); // B-print1
	A& aRef = b;
	aRef.print1(); // B-print1
}

void Test3()
{
	A* pA = new B;
	pA->print1();   // B-print1
	pA->print2();   // B-print2

	A* pAA = new C;
	pAA->print1();   // C-print1
	pAA->print2();   // C-print2

	B* pB = new C;
	pB->print1();   // C-print1
	pB->print2();   // C-print2

}

void Test4()
{
	A* pA = new B;
	pA->print3();   // A-print3 B-print3
	pA->A::print3(); // A-print3

	B b;
	b.print3(); // A-print3 B-print*
	b.A::print3(); // A-print3
}

int main()
{

}