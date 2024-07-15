#include "Contact.h"	//Contact.cpp

#include<iostream>
using namespace std;

Contact::Contact(string n, string p) :
	name(n), phoneNumber(p) {}

void Contact::setName(string s) {
	name = s;
}
string Contact::getName() const {
	return name;
}
string Contact::getPhoneNumber() const {
	return phoneNumber;
}

bool Contact::operator==(const Contact& c)
{
	if (c.getName() == name)
		cout << phoneNumber << endl;
	return c.getName() == name;
}

bool Contact::operator<(const Contact& c)
{
	return name < c.getName();
}
bool Contact::operator>(const Contact& c)
{
	return name > c.getName();
}

bool Contact::operator<=(const Contact& c) {
	return name <= c.name;
}
istream& operator>>(istream& is, Contact& c) {
	is >> c.name >> c.phoneNumber;
	return is;
}
ostream& operator<<(ostream& os, const Contact& c) {
	os << c.phoneNumber << endl;
	return os;
}
