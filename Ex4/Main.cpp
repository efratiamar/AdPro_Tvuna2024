#include "MyString.h"

void crypto(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <='z')
			str[i] = 'z' - (str[i] - 'a');
	}
}

string reverseWords(string str)
{
	string str2;
	int wordBegin = 0;
	int wordEnd;
	while ((wordEnd = str.find(" ", wordBegin)) != -1)
	{
		string word;
		for (int i = wordEnd; i >= wordBegin; i--)
			word.push_back(str[i]);
		str2 += word;
		wordBegin = wordEnd + 1;
	}
	string word = " ";
	for (int i = str.length() - 1; i >= wordBegin; i--)
		word.push_back(str[i]);
	str2 += word;

	return str2;

}


MyString f()
{
	MyString st("good day");
	//..
	return move(st);
}

int main()
{
	MyString s1("hello bye");

	MyString s2(s1);
	MyString s3 = s1;

	MyString s4 = f();

	s2 = s1 = s3;

	s2 = f();

	MyString s5 = s1 + s2;

	MyString s6("abc");
	s1 = s6 * 3;


	//****** string *********

	string str1;
	str1 = "asdfafd aasfasf faa &&";
	str1 = " faa";
	str1 += "DDa";

	str1[2] = 'g';
	cout << str1;
	cin >> str1;

	int l = str1.length();
	str1 = "asa aaa bcbd aaa";
	int i = str1.find("aaa");

	str1 = "";
	str1.push_back('s'); //s
	str1.push_back('a'); //sa
	str1.push_back('f'); //saf
	str1.pop_back(); //sa

	str1 += "fffff"; //saffffff
	str1 = "ss dd";

	str1 = "myfile.txt";
	//string filename = str1.substr(0, str1.length() - 4);

}