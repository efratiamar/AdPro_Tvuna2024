//--------------------------------------
//  class TailList implementation
//-------------------------------------

#include "TailList.h"

TailList::TailList() :
	List(), last(nullptr) {}

TailList::TailList(const TailList& lst)
	:List(lst)
{
	if (isEmpty())
	{
		last = nullptr;
		return;
	}
	last = head;
	while (last->next)
		last = last->next;
}

void TailList::add(int val)
{
	if (isEmpty())
	{
		List::add(val);
		last = head;
	}
	else
		List::add(val);
}

void TailList::clear()
{
	// delete all values from collection
	List::clear();
	// then set the pointer last to zero
	last = nullptr;
}


void TailList::removeFirst()
{
	// remove the first element 
	List::removeFirst();
	// if we remove last element
	if (isEmpty())
		last = nullptr;
}

void TailList::addToEnd(int val)
{
	// add a new element to end of List
	if (last != nullptr)
	{
		last->next = new Link(val, nullptr);
		last = last->next;
	}
	// otherwise, just add to front
	else
		add(val);
}
