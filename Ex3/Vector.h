#pragma once
#pragma once
#include <iostream>
using namespace std;

class Vector
{
	int* numbers;
	int capacity;
	int size;

	int getCapacity() const
	{
		return capacity;
	}

public:
	Vector(int _cap = 10)
		: capacity(_cap), size(0)
	{
		numbers = new int[capacity];
		//if (!numbers) ...

	}
	//copy ctor
	Vector(const Vector& v2)
	{
		capacity = v2.getCapacity();
		size = v2.getSize();

		numbers = new int[capacity];
		for (int i = 0; i < size; i++)
			numbers[i] = v2.numbers[i];
	}

	//move ctor
	Vector(Vector&& v2)
	{
		capacity = v2.getCapacity();
		size = v2.getSize();

		numbers = v2.numbers;
		v2.numbers = nullptr;
	}

	~Vector()
	{
		if (numbers)
			delete[] numbers;
		numbers = nullptr;
	}


	int getSize() const
	{
		return size;
	}

	bool isEmpty() const
	{
		return size == 0;
	}

	void addLast(int k)
	{
		if (size == capacity)
			cout << "Vector is full" << endl;
		else
			numbers[size++] = k;
	}

	int lastValue()
	{
		if (!isEmpty())
			return numbers[size - 1];
		//else
			//throw "Vector is empty";
	}
	
	int removeLast()
	{
		if (!isEmpty())
			return numbers[--size];
		//else
			//throw "Vector is empty";
	}

	void clear()
	{
		size = 0;
	}

	int at(int i) const
	{
		if (i < size && i >= 0)
		{
			return numbers[i];
		}
		//else
			//throw "Index is out of range";

	}

	void print() const
	{
		for (int i = 0; i < size; i++)
			cout << numbers[i] << " ";
		cout << endl;
	}

	void sort()
	{
		int i, j;
		for (i = 1; i < size; i++)
		{
			int tmp = numbers[i];
			for (j = i; j > 0 && tmp < numbers[j - 1]; j--)
				numbers[j] = numbers[j - 1];
			numbers[j] = tmp;
		}
	}


};