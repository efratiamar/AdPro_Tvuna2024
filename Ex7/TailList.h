//--------------------------------------
// class TailList
// a variation on Lists-can add elements 
// to the end as well as to front
//--------------------------------------
#include "List.h"
class TailList : public List
{
public:
// constructors
	TailList();
   TailList(const TailList&);

// override methods from class List
	void add(int value);
	void clear();
	void removeFirst();
// add element to the end of the List
	void addToEnd(int value);
protected:
// data area -- Link to end
	Link* last;
};
