#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

Shape::Shape(string n) :name(n)
{}

void Shape::print()
{
	cout << name << ":\t";
	details();
	cout << "area:\t" << area() << endl;
}

Square::Square(int s) : Shape("Square"), side(s)
{}

float Square::area()
{
	return side * side;
}

void Square::details()
{
	cout << side << "\t";
}


Circle::Circle(int r, int x, int y)
	:Shape("Circle")
{
	radius = r;
	center_x = x;
	center_y = y;
}

float Circle::area()
{
	return 3.14 * radius * radius;
}

void Circle::details()
{
	cout << radius << "\t(" << center_x << ',' << center_y << ")\t";
}


Triangle::Triangle(int x, int y, int z) :Shape("Triangle")
{
	a = x;	b = y;	c = z;
}

float Triangle::area()
{
	int s = (a + b + c) / 2.0;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

void Triangle::details()
{
	cout << a << '\t' << b << '\t' << c << '\t';
}

int main()
{
	//Shape s;   //compilation error
	Shape* ps; //ok
	//ps = new Shape; //compilation error

	Square sq(3); //ok
	ps = new Square(4); //ok

	Shape* vec[10];
	for (int i = 0; i < 10; i++)
	{
		int x = rand() % 3;
		switch (x)
		{
		case 0:
			vec[i] = new Square(rand() % 10 + 1);
			break;
		case 1:
			vec[i] = new Triangle(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);
			break;
		case 2:
			vec[i] = new Circle(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		vec[i]->print();
	}

	for (int i = 0; i < 10; i++)
	{
		if (vec[i])
			delete vec[i];
	}

}
