#include "QueueList.h"

//== class QueueList implementation ==

QueueList::QueueList() : data()
{
    // no further initialization
}

QueueList::QueueList(const QueueList& v)
    : data(v.data)
{}


void QueueList::clear()
{
    data.clear();
}

int QueueList::dequeue()
{
    int result = data.firstElement();
    data.removeFirst();
    return result;
}

void QueueList::enqueue(int value)
{
    data.addToEnd(value);
}

int QueueList::front()
{
    return data.firstElement();
}

bool QueueList::isEmpty() const
{
    return data.isEmpty();
}
