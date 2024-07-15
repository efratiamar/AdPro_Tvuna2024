#pragma once		//Contact.h
#include<string>
using namespace std;
class Contact
{
private:
	string name;
	string phoneNumber;
public:
	Contact(string n = "", string p = "");
	void setName(string);
	string getName() const;
	string getPhoneNumber() const;

	bool operator==(const Contact& c);
	bool operator<(const Contact& c);
	bool operator>(const Contact& c);
	bool operator<=(const Contact& c);
	friend istream& operator>>(istream&, Contact&);
	friend ostream& operator<<(ostream&, const Contact& c);
};
