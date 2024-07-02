#pragma once
const int MAX_LENGTH = 10;

template <class T>
class GList
{
public:
	bool IsEmpty() const;
	bool IsFull() const;
	int  Length() const;
	void Insert(T item);
	void Delete(T item);
	bool IsPresent(T item) const;
	void SelSort();
	void Print() const;
	GList(); // Constructor
private:
	int length;
	T data[MAX_LENGTH];
};


template <class T>
bool GList<T>::IsEmpty() const
{
	return length == 0;
}

template <class T>
void GList<T>::Delete(T item)
{
	for (int i = 0; i < length; i++)
		if (item == data[i])
		{
			//for...
			length--;
			return;
		}

}



template <class T>
bool GList<T>::IsFull() const
{ /* ... */
};

template<class T>
void GList<T>::Insert(T item)
{
	data[length] = item;
	length++;
}



