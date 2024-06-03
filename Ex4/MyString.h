#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyString
{
	char* str;

	void setString(const char* p)
	{
		str = new char[strlen(p) + 1];
		strcpy(str, p);
	}

public:
	MyString(const char* p)
	{
		/*str = new char[strlen(p) + 1];
		strcpy(str, p);*/
		setString(p);
	}

	MyString(const MyString& ms)
	{
		/*str = new char[strlen(ms.str) + 1];
		strcpy(str, ms.str);*/
		setString(ms.str);
	}

	MyString& operator=(const MyString& ms)
	{
		if (str)
			delete[] str;
		setString(ms.str);
		return *this;
	}

	MyString& operator=(MyString&& ms)
	{
		if (str)
			delete[] str;

		str = ms.str;
		ms.str = nullptr;
		
		return *this;
	}

	~MyString()
	{
		if (str)
			delete[] str;
		str = nullptr;
	}

	MyString(MyString&& ms)
	{
		str = ms.str;
		ms.str = nullptr;
	}

	char* getString() const
	{
		return str;
	}
	int length() const
	{
		return strlen(str);
}
	void print()
	{
		cout << str;
	}

	//s1 == s2
	bool operator==(const MyString& ms) const
	{
		return strcmp(str,ms.str) == 0;
	}

	//s1 == "effff";
	bool operator==(const char* s) const
	{
		return strcmp(str, s) == 0;
	}

	//s1 != s2
	bool operator!=(const MyString& ms) const
	{
		//return strcmp(str, ms.str) != 0;
		return !(ms == *this);
	}

	//s1 < s2
	bool operator<(const MyString& ms) const
	{
		return strcmp(str, ms.str) < 0;
	}
	//s1 > s2
	bool operator>(const MyString& ms) const
	{
		return strcmp(str, ms.str) >= 0;
	}

	//s1 <= s2
	bool operator<=(const MyString& ms) const
	{
		return !(ms > *this);
	}
	//s1 >= s2
	bool operator>=(const MyString & ms) const
	{
		return !(ms < *this);
	}
	
	//s1 + s2
	MyString operator+(const MyString& ms) const
	{
		char* p = new char[strlen(str) + strlen(ms.str) + 1];
		strcpy(p, str);
		strcat(p, ms.str);

		MyString tmp(p);
		
		return tmp;
	}
	//s1 = s6 * 3;
	MyString operator*(int times) const
	{
		char* p = new char[strlen(str) * times + 1];
		strcpy(p, str);
		for (int i = 0; i < times-1; i++)
			strcat(p, str);

		MyString tmp(p);

		return tmp;
	}

	friend ostream& operator<<(ostream& os, const MyString& s1);

	friend istream& operator>>(istream& is, MyString& s1);


};

//MytString s1("sdaffsa fssa")
//cout << s1;
ostream& operator<<(ostream& os, const MyString& s1)
{
	os << s1.str;
	return os;
}

//cin >> s1;
istream& operator>>(istream& is, MyString& s1)
{
	char temp[300];
	is >> temp;
	if (s1.str)
		delete[] s1.str;
	s1.setString(temp);
	return is;
}

