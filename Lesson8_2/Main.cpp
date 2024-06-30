#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class A
{
private:
	char* str1;
public:

	A(const char* str)
	{
		cout << "A constructor\n";
		str1 = new char[strlen(str) + 1];
		strcpy(str1, str);
	}

	~A()
	{
		cout << "A destructor\n";
		if (str1)
			delete str1;
	}
};

class B : public A
{
private:
	char* str2;
public:

	B(const char* str) : A(str)
	{
		cout << "B constructor\n";
		str2 = new char[strlen(str) + 1];
		strcpy(str2, str);
	}

	~B()
	{
		cout << "B destructor\n";
		if (str2)
			delete str2;
	}
};

void Test6_1()
{
	A aa("test A");
	B bb("test B");
	return;

/*
A constructor
A constructor
B constructor
B destructor
A destructor
A destructor
*/
}

int Test6_2()
{
	A* pA = new B("test ab");
	delete pA;
	return 0;
/*
A constructor
B constructor
A destructor
*/
}


class A1
{
private:
	char* str1;
public:

	A1(const char* str)
	{
		cout << "A1 constructor\n";
		str1 = new char[strlen(str) + 1];
		strcpy(str1, str);
	}

	virtual ~A1()
	{
		cout << "A1 destructor\n";
		if (str1)
			delete str1;;
	}
};

class B1 :public A1
{
private:
	char* str2;
public:

	B1(const char* str) :A1(str)
	{
		cout << "B1 constructor\n";
		str2 = new char[strlen(str) + 1];
		strcpy(str2, str);
	}

	~B1()
	{
		cout << "B1 destructor\n";
		if (str2)
			delete str2;
	}
};


int Test6_3()
{
	A1* pA1 = new B1("test ab virtual");
	delete pA1;
	return 0;

/*
A constructor
B constructor
B destructor
A destructor
*/
}

int main()
{
	Test6_2();
}