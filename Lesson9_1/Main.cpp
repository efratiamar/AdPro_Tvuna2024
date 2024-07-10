#include <iostream>
using namespace std;

template <class T>
void Print(T val)
{
	cout << "Value is " << val << endl;
	T i;
	i = val;
	i = i + val;
}

class MyClass
{
	// Test1: operator<<, operator+, default ctor,
	// must be defined in MyClass

	// Test2: operator > must be defined in MyClass
};

template <class T>
void DoSomething()
{
	T t1;
	cin >> t1;
	K t2;
	cin >> t2;
	T t3 = t1 + t2;
	cout << t3;
}


void Test1()
{
	int sum = 7;
	char initial = 'A';

	Print(sum); //<==> Print<int>(sum);

	DoSomething<int>();//DoSomething(); //XXX

	Print<int>(sum);
	Print<char>(initial);
	Print<float>(2.5);
	Print<float>(2.3);

	MyClass mc;
	Print<MyClass>(mc);
}
template <class T>
T getMax(T x, T y)
{
	if (x > y)
		return x;
	else
		return y;
}


//
//template <class T>
//T getMax(T x, T y)
//{
//	if (x > y)
//		return x;
//	return y;
//}





//////////////////////////

//template <class T>
//T getMax(T x, T y)  //return type T
//{
//	if (x > y)
//		return x;
//	return y;
//}
//


void Test2()
{
	cout << getMax<int>(3, 4) << endl;

	float a = 5.25, b = 3.5;
	cout << getMax<float>(a, b) << endl;
	cout << getMax<char>('a', 'z') << endl;
	MyClass mc1, mc2;
	//cout << getMax<MyClass>(mc1, mc2) << endl;	//compilation error:
												//operator > must be defined for MyClass
	getMax<MyClass>(mc1, mc2);
}


///////////////////////////////////////

template <class T>
void Swap(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template <class T>
void bubbleSort(T vec[], int size)
{
	for (int last = size - 1; last > 0; last--)
		for (int i = 0; i < last; i++)
			if (vec[i + 1] < vec[i])
				Swap<T>(vec[i], vec[i + 1]);
}

template <class T>
void print(T vec[], int size)
{
	for (int i = 0; i < size; i++)
		cout << vec[i] << ' ';
	cout << endl;
}


void Test3()
{
	int x = 7;
	int y = 8;
	Swap<int>(x, y);
	Swap(x, y);

	int integers[10];
	srand((unsigned)time(nullptr));
	for (int i = 0; i < 10; i++)
		integers[i] = rand() % 100;
	bubbleSort<int>(integers, 10);
	print<int>(integers, 10);

	char characters[5];
	for (int i = 0; i < 5; i++)
		characters[i] = (rand() % 26) + 65;
	bubbleSort<char>(characters, 5);
	print<char>(characters, 5);
}


int main()
{
	Test1();
}