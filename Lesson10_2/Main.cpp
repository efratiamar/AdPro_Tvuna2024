#include <iostream>
using namespace std;

int add(int a, int b) {	return (a + b); }

int sub(int a, int b) {	return (a - b); }

int mult(int a, int b) { return (a * b); }

void print(char c) { cout << c; }


int calculator(int x, int y, int (*func)(int, int))
{
	int g;
	g = (*func)(x, y);    // g = func(x,y);
	return g;
}

int main()
{
	int a;
	a = 5;

	int (*func) (int, int);

	func = mult;

	int x = add(4, 5);
	
	func = add;

	x = func(4, 6);
	x = (*func)(4, 6);

	func = mult;

	x = func(4, 6);
	x = (*func)(4, 6);

	//func = print;

	int s = calculator(8, 7, add);
	func = mult;
	s = calculator(8, 7, func);

	
	
	int x = 8;

	int (*pFunc1) (int, int);
	void (*pFunc2) (char);

	pFunc1 = add; //sub...
	pFunc2 = print;

	int a = add(5, 6);
	a = pFunc1(4, 6);
	pFunc1 = mult;
	a = pFunc1(4, 6);
	(*pFunc2)('D');
	
		
	int (*my_func) (int, int);

	my_func = sub;
	int a = sub(22, 23); //a = -1
	int b = my_func(22, 23); //b = -1
	int c = (*my_func)(22, 23); //c = -1

	my_func = add;
	int d = my_func(4, 5); //d = 9
	int e = (*my_func)(4, 5); //e = 9

	int x, y;
	char op;
	cout << "enter an expression\n";
	cin >> x >> op >> y;
	int(*func)(int, int) = nullptr;
	switch (op)
	{
	case '+': func = add; break;
	case '-': func = sub; break;
	case '*': func = mult; break;
	}
	cout << calculator(x, y, func) << endl;
}




//int add(int a, int b)
//{
//	return (a + b);
//}
//
//int sub(int a, int b)
//{
//	return (a - b);
//}
//
//int calculator(int x, int y, int(*func)(int, int))
//{
//	int g;
//	g = (*func)(x, y); //<==> g = func(x,y);
//	return g;
//}
//
//int main()
//{
//	int (*my_func) (int, int);
//	
//	my_func = sub;
//	int x = sub(22, 23); //x = -1
//	int y = my_func(22, 23); //y = -1
//	int z = (*my_func)(22, 23); //z = -1
//
//	my_func = add;
//	int r = my_func(4, 5); //r = 9
//	int s = (*my_func)(4, 5); //s = 9
//
//	int a = calculator(7, 5, add); //a = 9
//	int b = calculator(20, a, my_func); // b = 29
//	int c = calculator(30, b, sub); // c = 1
//}
