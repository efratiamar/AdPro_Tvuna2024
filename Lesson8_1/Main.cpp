#include <iostream>
using namespace std; 

class A
{
public:
	virtual void print1() { cout << "A–print1"; }
	virtual void print2() { cout << "A–print2"; }
	virtual void print3() { cout << "A–print3"; }
	virtual void print4() { cout << "A-print4"; }


	virtual void testA(float x) { cout << "testA base" << endl; };
	virtual void testB(float x) = 0;
	virtual void testC() const { cout << "testC base" << endl; };
	void testD() { cout << "testD base" << endl; };
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
	void print4() final { cout << "B-print4"; }

	void testA(float x) override { cout << "testA derived1" << endl; };
	void testB(float x) override { cout << "testB derived1" << endl; };
	void testC() const override { cout << "testC derived1" << endl; };
	void testD() { cout << "testD derived1" << endl; };

	//int testA(int x) override { cout << "testA derived2" << endl; };
	//void testB(int x) override { cout << "testB derived2" << endl; };
	//void testC() override { cout << "testC derived2" << endl; };
	//void testD() override { cout << "testD derived2" << endl; };

};

class C : public B
{
public:
	void print1() { cout << "C–print1"; }
	void print2() { cout << "C–print2"; }
	//void print4() { cout << "B-print4"; } //comp error!!!!!
	void print4(int x) { cout << "B-print4"; } //ok!!!!!
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

void Test5()
{
	A* pA = new B;
	pA->testA(5.8);//testA derived1
	pA->testB(4.7);//testB derived1
	pA->testC();//testC derived1
	pA->testD();//testD base

}


int main()
{

}