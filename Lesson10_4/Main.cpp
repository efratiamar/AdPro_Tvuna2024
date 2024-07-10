#include <iostream>
using namespace std;

int  calculator(int x, int y, int (*func)(int, int))
{
	int g;
	g = (*func)(x, y);    // g = func(x,y);
	return g;
}

int main()
{
	[] () {cout << "hello world" << endl; } ();

	[] (int i) { cout << ":" << i << ":"; } (42);
	
	int x = [] (int y) {return y * y; }(4);
	cout << x;

	int num = 42;
	auto func1 = [] (int i) { cout << ":" << i << ":"; };
	bool (*func2) (int, char) = [](int i, char c) { return (i == c); };

	func1(num);
	cout << func2(74, 'A');


	int x, y;
	char op;
	cout << "enter an expression\n";
	cin >> x >> op >> y;

	int(*func)(int, int) = nullptr;

	switch (op)
	{
	case '+':
		func = [](int x, int y) {return x + y; };
		break;
	case '-':
		func = [](int x, int y) {return x - y; };
		break;
	case '*':
		func = [](int x, int y) {return x * y; };
		break;
	}
	cout << calculator(x, y, func) << endl;
}