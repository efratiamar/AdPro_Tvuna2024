#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#include "Strings.h"

Strings::Strings(const char* w0, const char* w1, const char* w2, const char* w3)
{
	setSize(4);
	strcpy(words[0], w0);
	strcpy(words[1], w1);
	strcpy(words[2], w2);
	strcpy(words[3], w3);
}

int Strings::isSmaller(int i, int j)
{
	return strcmp(words[i], words[j]) < 0;
}

void Strings::swap(int i, int j)
{
	char tmp[20];
	strcpy(tmp, words[i]);
	strcpy(words[i], words[j]);
	strcpy(words[j], tmp);
}

void Strings::show(int i)
{
	cout << i << " : " << words[i] << endl;
}
