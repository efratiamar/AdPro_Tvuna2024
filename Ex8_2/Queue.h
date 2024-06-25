#pragma once
//--------------------------
//  class Queue 
//  abstract class - simply defines protocol for
//   Queue operations
//--------------------------

class Queue
{
public:
    virtual void clear() = 0;
    virtual int dequeue() = 0;
    virtual void enqueue(int value) = 0;
    virtual int front() = 0;
    virtual bool isEmpty() const = 0;
};

