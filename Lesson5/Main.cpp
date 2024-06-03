#include <iostream>
#include <fstream>
using namespace std;

#include "Circle.h"


int sample1();
int sample2();
int sample3();
int sample4();
int sample5();
int sample6();

//oop
int sample9();
int sample10();
int sample11();
int sample12();


int main()
{

	//sample1();
	//sample2();
	//sample3();
	//sample4();
	//sample5();
	//sample7();
	//sample9();
	//sample10();
	sample11();
	//sample12();
	//sample13();
}

//
int sample1()
{
	//option A

	ofstream myFile;
	myFile.open("grades.txt");

	// option B
	//ofstream myFile("grades.txt");

	// option C
	//fstream myFile;
	//myFile.open("grades.txt", ios::out);

	if (!myFile)
	{
		cout << "File could not be opened.\n";
		return -1;
	}

	int tz;
	float grade;
	for (int i = 0; i < 3; i++)
	{
		cout << "enter a tz and grade";
		cin >> tz >> grade;
		myFile << tz << '\t' << grade << endl;
	}
	myFile.close();
	return 0;
}

int sample2()
{
	ifstream file;
	file.open("grades.txt");

	if (!file) {
		cout << "File could not be opened.\n";
		return -1;
	}

	int tz; float grade; float sum = 0; int cnt = 0;

	file >> tz >> grade; //input from file	
	while (!file.eof())
	{
		sum += grade;
		cnt++;
		cout << tz << '\t' << grade << endl;
		file >> tz >> grade;
	}

	cout << "avg= " << sum / cnt;

	file.close();

}

int sample3()
{
	ifstream file;
	file.open("grades.txt");
	if (!file) {
		cout << "File could not be opened.\n";
		return -1;
	}

	int tz; float grade; float sum = 0; int cnt = 0;

	while (file >> tz >> grade) //input from file
	{
		sum += grade; cnt++;
		cout << tz << '\t' << grade << endl;
	}

	if (cnt)
		cout << "avg= " << sum / cnt;

	file.close();

}

int sample4()
{
	ifstream fin("grades.txt");
	if (!fin)
	{
		cout << "Input file could not be opened.\n";
		return -1;
	}
	ofstream fout("AfterBonusGrades.txt");
	if (!fout)
	{
		cout << "Output file could not be opened.\n";
		return -1;
	}
	int tz;   float grade;
	fin >> tz >> grade;
	while (!fin.eof())
	{
		fout << tz << '\t' << grade + 5 << endl;
		fin >> tz >> grade;
	}
	fin.close();
	fout.close();
	return 0;

}

void addBonus(ifstream& f1, ofstream& f2, int bonus)
{
	int tz;   float grade;
	f1 >> tz >> grade;
	while (!f1.eof())
	{
		f2 << tz << '\t' << grade + bonus << endl;
		f1 >> tz >> grade;
	}
}

int sample5()
{
	ifstream fin("grades.txt");
	if (!fin)
	{
		cout << "Input file could not be opened.\n";
		return -1;
	}
	ofstream fout("AfterBonusGrades.txt");
	if (!fout)
	{
		cout << "Output file could not be opened.\n";
		return -1;
	}

	addBonus(fin, fout, 10);

	fin.close();
	fout.close();
	return 0;

}

int sample6()
{
	ifstream f1; //file for reading
	ofstream f2; //file for writing
	char name[10];	float grade;

	f1.open("students.txt"); //open file for reading, file must be exist
	if (!f1) { cout << "File could not be opened.\n"; return 0; }

	//f2.open("grades.txt",ios::in); //open file for writing, but succeed only if file exist
	f2.open("grades.txt"); //open file for writing, if not exist, create new file

	if (!f2) { cout << "File could not be opened.\n"; return 0; }

	while (f1 >> name)
	{
		//read from file f1 using >> opertor
		//read until the first stopper (\n, \t, ' ‘)
		//read into 'name’ 
		cout << "enter " << name << "'s grade ";
		cin >> grade;

		//write 'name'into file f2 using << opertor
		f2 << name << '\t' << grade << endl;
	};

	f1.close(); //don't forget to close
	f2.close(); //don't forget to close
	return 0;

}

int sample9()
{

	// option A
	ofstream f;
	f.open("points.txt");

	// option B
	//ofstream f("points.txt");

	// option C
	//fstream f;
	//f.open("points.txt",ios::out);

	if (!f)
	{
		cout << "failed opening file.\n";
		return -1;
	}

	for (int i = 0; i < 10; i++)
	{
		Point p(rand() % 100, rand() % 100);
		{
			cout << p << endl;
			f << p << endl;
		}
	}
	f.close();
	return 0;

}


int sample10()
{
	ifstream file1;
	file1.open("points.txt");

	ofstream file2;
	file2.open("inCircle.txt");

	if (!file1 || !file2)
	{
		cout << "failed opening file.\n";
		return -1;
	}

	Circle A;
	cout << "enter a circle (radius and center point )\n";
	cin >> A; //(4,5) 7.8
	Point p;
	for (int i = 0; i < 10; i++)
	{
		file1 >> p;
		if (A.onInOut(p) < 0)
			file2 << p << endl;
	}
	file1.close();
	file2.close();

	return 0;
}

int sample11()
{
	ifstream file("inCircle.txt");
	if (!file)
	{
		cout << "failed opening file.\n";
		return -1;
	}
	Point p;
	file >> p; //(6,7)
	while (!file.eof())
	{
		cout << p << endl;;
		file >> p;
	}
	file.close();

	return 0;
}

void printFileToScreen(ifstream& f)
{
	Point p;
	while (f >> p)
		cout << p << endl;
}

int sample12()
{
	ifstream file("inCircle.txt");
	if (!file)
	{
		cout << "failed opening file.\n";
		return -1;
	}
	
	printFileToScreen(file);

	file.close();
	return 0;
}


