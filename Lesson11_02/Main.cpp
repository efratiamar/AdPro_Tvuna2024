#include <iostream>
using namespace std;

//a bcd
//dcb a
void reverse1(const char* word)
{
	if (!(*word)) // == nullptr
		return;

	reverse1(word + 1);
	cout << word[0]; //*word
}




//n! = (n-1)! * n
//0!  = 1
//1! = 1
int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;

	return factorial(n - 1) * n;
}

int mult(int n, int m)
{
	if (m == 0)
		return 0;

	return mult(n, m - 1) + n;
}

int sum(int n) //4 //3
{
	if (n == 0)
		return 0;

	return sum(n - 1) + n;

}

int sum1(int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += i;
	}

	return sum;

}

int main()
{
	reverse1("abcd");
}