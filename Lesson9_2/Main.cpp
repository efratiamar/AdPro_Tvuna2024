#include "GList.h"

#include <iostream>
using namespace std;

int main()
{
	//GList list1; //compilation error!!!

	GList<int> list1;
	GList<float> list2;
	GList<string> list3;
	GList<float> list4;

	list1.Insert(356);
	list2.Insert(84.375);
	list3.Insert("Muffler bolt");
}