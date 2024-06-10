#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	char name[20];
	int grade;
public:
	static int numOfStudents;
	static int numOfFails;

	Student(const char* n);
	~Student();

	void SetGrade(int g);
	static void PercentageOfFailers();
};
