#include <iostream>
using namespace std; 

#include "SearchTree.h"
#include "Contact.h"

int main()
{
	//Tree<int> T0; //comp err;
	//T0.isEmpty();
	//T0.clear();
	//T0.preOrder();
	
	Tree<int>* pT0; //ok
	
	SearchTree<int> T0; //ok
	

	SearchTree<Contact> T1; //ok
	Contact c;
	string name;
	char choice;
	cout << "enter 'a' to add a new contact\n";
	cout << "enter 'b' to delete a contact\n";
	cout << "enter 'c' to find a phone number\n";
	cout << "enter 'd' to print all contancts\n";
	cout << "enter 'e' end\n";
	cin >> choice;
	while (choice != 'e')
	{
		switch (choice)
		{
		case 'a':cout << "enter name and phone number\n";
			cin >> c;	T1.add(c);
			break;
		case 'b': cout << "enter a name to delete\n";
			cin >> name;	c.setName(name);
			T1.remove(c);
			break;
		case 'c':cout << "enter a name\n";
			cin >> name;	c.setName(name);
			T1.search(c);
			break;
		case 'd':
			T1.inOrder();
			break;
		}
		cout << "enter a-e" << endl;
		cin >> choice;
	}
	return 0;

}