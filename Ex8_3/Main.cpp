#include <iostream>
using namespace std;

class myException1 : public exception
{
public:
    virtual const char* what() const throw()
    {
        return "My exception 1 happened";
    }
};

class myException2 : public exception
{
public:
    virtual const char* what() const throw()
    {
        return "My exception 2 happened";
    }
};


int main()
{
    try
    {
        int y = -80;
        if (0 == y)
        {
            myException1 myex1;
            throw myex1;
        }
        else if (y < 0)
        {
            myException2 myex2;
            throw myex2;
        }
        else
            int x = 4 / y;
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }
    
    return 0;
}

