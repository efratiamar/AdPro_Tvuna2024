#include "Vector.h"

Vector::Vector(int _cap)
	: capacity(_cap)
{
	numbers = new int[capacity];
	//if (!numbers) ...

	srand((unsigned)time(nullptr));
	for (int i = 0; i < capacity; i++)
		numbers[i] = rand() % 100;
}

Vector::Vector(const Vector& v2)
{
	capacity = v2.getCapacity();

	numbers = new int[capacity];
	for (int i = 0; i < capacity; i++)
		numbers[i] = v2.numbers[i];
}

Vector::Vector(Vector&& v2)
{
	capacity = v2.getCapacity();
	numbers = v2.numbers;
	v2.numbers = nullptr;
}

Vector::~Vector()
{
	if (numbers)
		delete[] numbers;
	numbers = nullptr;
}

int Vector::getCapacity() const
{
	return capacity;
}

void Vector::print()
{
	for (int i = 0; i < capacity; i++)
		cout << numbers[i] << " ";
	cout << endl;
}

void Vector::setValue(int pos, int val)
{
	if (pos < capacity)
	{
		numbers[pos];
	}
}
