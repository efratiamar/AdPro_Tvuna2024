#include<iostream>
#include<list>

using namespace std;

template <typename T>
void my_for_each
(
	typename list<T>::iterator itB,
	typename list<T>::iterator itE,
	void (*func) (T)
)
{
	for (auto it = itB; it != itE; it++)
	{
		(*func)(*it);
	}
}


template <typename T>
bool my_all_of
(
	typename list<T>::iterator itB,
	typename list<T>::iterator itE,
	bool (*func) (T)
)
{
	for (auto it = itB; it != itE; it++)
	{
		if ((*func)(*it) == false)
			return false;
	}

	return true;
}

int main()
{
	list<char> ls;
	//ls...

	my_for_each<char>(ls.begin(), ls.end(), [](char x) {cout << x-- << " "; });
}