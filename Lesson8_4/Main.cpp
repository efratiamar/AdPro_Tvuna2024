#include <iostream>
using namespace std;

class Animal
{
protected:
	int numberOfLegs;
public:
	Animal(int n) : numberOfLegs(n) {};
	virtual ~Animal() {};
	virtual void Speak() const = 0;
	int GetLegs() const { return numberOfLegs; };
};

class Dog : public Animal
{
public:
	Dog() : Animal(4) {};
	virtual void Speak() const { cout << "Woof Woof!\n"; };
};

class Cat : public Animal
{
public:
	Cat() : Animal(4) {};
	virtual void Speak() const { cout << "Meow Meow!\n"; };
};

class Chicken : public Animal
{
public:
	Chicken() :Animal(2) {};
	virtual void Speak() const { cout << "Kukuriku!\n"; };
};

int main()
{
	Animal* animals[5];
	int choice;

	for (int i = 0; i < 5; i++)
	{
		cout << "choose (1)Dog (2)Cat (3)Chicken: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			animals[i] = new Dog;
			break;
		case 2:
			animals[i] = new Cat;
			break;
		case 3:
			animals[i] = new Chicken;
			break;
		default:
			i--;
			break;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		animals[i]->Speak();
		cout << "Legs: " << animals[i]->GetLegs() << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		if (animals[i])
			delete animals[i];
	}
}

