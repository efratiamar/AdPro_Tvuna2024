#include "Numbers.h"
#include <iostream>
using namespace std;

Numbers::Numbers(int numSize)
{
    setSize(numSize);
    vec = new int[numSize];
    srand((unsigned)time(nullptr));
    for (int i = 0; i < numSize; i++)
        vec[i] = rand() % 100;
}

int Numbers::isSmaller(int i, int j)
{
    return (vec[i] < vec[j]);
}

void Numbers::swap(int i, int j)
{
    int tmp = vec[i];
    vec[i] = vec[j];
    vec[j] = tmp;
}

void Numbers::show(int i)
{
    cout << i << " : " << vec[i] << endl;
}
