#pragma once
#include "SortAndPrint.h"

class Numbers : public SortAndPrint
{
private:
    int* vec;

    void swap(int i, int j) override final;
    int isSmaller(int i, int j) override final;
    void show(int i) override final;
public:
    Numbers(int);
    ~Numbers() { if (vec) delete[] vec; }
};
