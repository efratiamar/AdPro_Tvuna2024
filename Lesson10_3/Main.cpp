#include <iostream>
using namespace std;

bool isEven(int x)
{
    return x % 2 == 0;
}

bool isPrime(int x)
{
    for (int i = 2; i < x / 2; i++)
        if (x % i == 0)
            return false;
    return true;
}

void filter(int* vec, int size, bool(*cond)(int))
{
    for (int i = 0; i < size; i++)
        if (cond(vec[i]))
            cout << vec[i] << ' ';
    cout << endl;
}


int main()
{
    int vec[10];
    for (int i = 0; i < 10; i++)
    {
        vec[i] = rand() % 100;
        cout << vec[i] << ' ';
    }
    cout << endl;
    filter(vec, 10, isEven);
    filter(vec, 10, isPrime);
    return 0;
}