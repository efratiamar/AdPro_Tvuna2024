#include <iostream>
using namespace std;

class Animal
{
public:
	float cageSize;
	int itemNum;
	bool carnivorous;
	int* feeding[7];

	Animal(int x)
	{};
};

class Bird : public Animal
{
public:
	float highetTopCage;

	Bird(float h) : Animal(5), highetTopCage(h)
	{};
};

int main()
{
	Bird b(7);
	b.cageSize = 8;
	b.highetTopCage = 7;

	Animal a(3);
	a.cageSize;

	Animal* pA = new Animal(5);
	pA->cageSize;
	((Bird*)pA)->highetTopCage = 7;
	if (pA)
		delete pA;

	pA = new Bird(6);
	pA->carnivorous = 9;
	((Bird *) pA)->highetTopCage = 7;
	if (pA)
		delete pA; //only the Animal part will be deleted!! we will fix it next lesson

	Bird* pB = new Bird(7);
	pB->cageSize;
	pB->highetTopCage =9;

	//pB = new Animal(5);

	pB->highetTopCage = 8;



}