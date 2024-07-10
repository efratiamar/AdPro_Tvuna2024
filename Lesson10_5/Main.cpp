#include <iostream>
using namespace std;

void Test0()
{
	int x, y;
	char op;
	cout << "enter an expression\n";
	cin >> x >> op >> y;
	
	int z = 0;
	switch (op)
	{
	case '+':
		[&z] (int x, int y) {z = x + y; } (x, y);
		break;
	case '-':
		[&z] (int x, int y) {z = x - y; } (x, y);
		break;
	case '*':
		[&z] (int x, int y) {z = x * y; } (x, y);
		break;
	}
	cout << "=" << z << endl;
}

void Test1()
{
	int x = 2345;
	int z = [](int x1)
		{
			int count = 0;
			while (x1)
			{
				x1 /= 10;
				count++;
			}
			return count;
		} (x);

		cout << "x=" << x << endl;//2345
		cout << "z=" << z << endl;//4
}

void Test2()
{
	int x = 2345;
	int z = [x]() mutable
		{
			int count = 0;
			while (x)
			{
				x /= 10;
				count++;
			}
			return count;
		} ();

		cout << "x=" << x << endl;//2345
		cout << "z=" << z << endl;//4

}

void Test3()
{
	int x = 2345;
	int z = 0;
	[&z](int x3)
		{
			int count = 0;
			while (x3)
			{
				x3 /= 10;
				z++;
			}
		} (x);

		cout << "x=" << x << endl;//2345
		cout << "z=" << z << endl;//4
}

int main()
{
	Test0();
	Test1();
	Test3();
	Test3();
}