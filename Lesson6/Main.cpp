#include <iostream>
using namespace std;

#include "Student.h"
#include "Calculator.h"

int globalVal = 0;

void sampleStringExcetion(int x, const char* ptr)
{
	if (x == 0)
		throw "Exception from x=0.";

	if (ptr == nullptr)
	{
		char a[4] = { 'e','r', 'r', '\0'};
		throw a;
	}
	else if (ptr != nullptr)
	{
		string s = "err";
		throw s;
	}
}

void sampleStaticLocal(int paramVal)
{
	static int staticVal = 0;
	staticVal += paramVal;
	cout << "static from func: " << ++staticVal << endl;

	int localVal = 0;
	cout << "local: " << ++localVal << endl;
	cout << "global from func: " << ++globalVal << endl;
}

void TestCalculatorService()
{
	int op, x, y;
	cout << "enter your choice\n";
	cin >> op;
	while (op)
	{
		cout << "enter 2 values\n";
		cin >> x >> y;
		switch (op)
		{
		case ADD:
		{
			cout << x << '+' << y << '=';
			cout << Calculator::add(x, y) << endl;
			break;
		}
		case SUB:
		{
			cout << x << '-' << y << '=';
			cout << Calculator::sub(x, y) << endl;
			break;
		}
		case MULT:
		{
			cout << x << '*' << y << '=';
			cout << Calculator::mult(x, y) << endl;
			break;
		}
		case DIV:
			try
			{
				float z = Calculator::div(x, y);
				cout << x << '/' << y << '=' << z << endl;
			}
			catch (char* msg) { cout << msg; }
			break;
		default: "no such option\n";
		};
		cout << "enter your choice\n";
		cin >> op;
	}
}

void TestStudentWithStaticFields()
{

	cout << Student::numOfStudents << endl;
	cout << Student::numOfFails << endl;

	Student::PercentageOfFailers(); //ok

	Student s1("dina");
	s1.SetGrade(66);

	Student s2("yossi");
	s2.SetGrade(40);

	Student s3("moshe");
	s3.SetGrade(20);

	cout << Student::numOfStudents << endl;
	cout << Student::numOfFails << endl;

	s3.PercentageOfFailers(); //ok
	Student::PercentageOfFailers(); //ok

	cout << s3.numOfStudents << endl;
	cout << s3.numOfFails << endl;

	Student* pS = new Student("david");
	pS->SetGrade(98);
	delete pS;

	cout << Student::numOfStudents << endl;
	cout << Student::numOfFails << endl;
}

void TestStaticLocal()
{
	for (int i = 0; i < 5; i++)
	{
		sampleStaticLocal(i);
		cout << "global from main: " << ++globalVal << endl;
		//cout << "static from func: " << ++staticVal << endl; //compliation error!!!
	}
}

int main()
{

	//Calculator c1;
	//int x = c1.add(7, 8);

	//int x = Calculator::add(7, 5);


	//TestStaticLocal();

	//TestStudentWithStaticFields();
	//TestCalculatorService();


	try
	{
		try
		{
			try
			{
				sampleStringExcetion(0, "fff");
			}
			catch (string msg)
			{
				cout << "Try / catch number 1." << endl;
				cout << msg << endl;
				throw "Throw again an exception.";
			}

		}
		catch (char* msg)
		{
			cout << "Try / catch number 1." << endl;
			cout << msg << endl;
			throw "Throw again an exception.";
		}
	}
	catch (const char* msg)
	{
		cout << "Try / catch number 2." << endl;
		cout << msg << endl;
	}
	return 0;
}
