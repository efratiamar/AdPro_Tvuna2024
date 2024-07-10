#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <stack>
#include <queue>

int main()
{
	vector<int> v1;

	vector<int> vec;//default ctor, create dynamic vector for integers, with unknown size
	cout << vec.capacity();


	vector<char> cv1(5);	//ctor that gets size, 
	//create vector with ‘size’ chars with default value of 0. //0 0 0 0 0 
	
	
	
	vector<char> cv2(5, 'x');	//ctor that gets size, and def val. 
	//create vector with 5 chars with default value of ‘x’. //’x’ ‘x’ ‘x’ ‘x’ ‘x’
	
	vector<int> vect(vec);	//copy ctor

	v1.push_back(1); //1
	v1.pop_back(); //

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4); //1 2 3 4 
	v1.pop_back(); // 1 2 3
	v1[1] = 7; //1 7 3
	v1.at(1) = 7;

	cout << v1.back(); //3
	cout << v1.capacity();
	cout << v1.size(); //3
	cout << v1.front(); //1
	if (v1.empty())
	{ //...;
	}
	v1.swap(vec);
	v1.clear();

	for (int i=0; i < v1.size(); i++)
	{
		cout << v1[i];
		cout << v1.at(i);
	}

	list<char> ls1;
	ls1.push_back('A');
	ls1.push_front('B'); //B A

	list<char> ls2;
	//...
	
	list<char>::iterator it1;

	it1 = ls1.begin();

	cout << *it1; //B
	*it1 = 'C'; //C A
	++it1;
	cout << *it1; //A
	--it1;
	cout << *(it1);

	it1 = ls1.end(); // A B C

	it1 = ls2.begin();

	for (list<char>::iterator it3 = ls1.begin(); it3 != ls1.end(); it3++)
	{
		cout << *it3 << endl;
	}

	for (vector<int>::iterator it3 = v1.begin();
		it3 != v1.end(); it3++)
	{
		cout << *it3 << endl;
	}


	list<float> ls3;
	ls3.push_back(2);//2
	ls3.push_front(1);// 1 2
	ls3.push_back(3);// 1 2 3
	ls3.push_back(4);// 1 2 3 4

	ls3.pop_back(); // 1 2 3
	ls3.pop_front(); // 2 3


	for (list<float>::iterator it3 = ls3.begin(); it3 != ls3.end(); it3++)
	{
		cout << *it3;
	}

	stack<char> s1;

	s1.push(8);
	s1.pop();
	s1.top();


	queue<int> q1;
	q1.push(5);
	q1.pop();
	q1.front();
}