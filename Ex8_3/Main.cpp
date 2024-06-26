//standard exceptions
#include <iostream>
using namespace std;

class myException1 : public exception
{
    virtual const char* what() const throw()
    {
        return "My exception happened";
    }
} myex;



class myException2 : public exception
{
    virtual const char* what() const throw()
    {
        return "My exception happened";
    }
} myex;

int main()
{
    try
    {
        int y = 0;
        //throw myex1;
        //throw me ex2;
        int x = 4 / y;  //האם יגיע לכאן?
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }
    catch (...)
    {
        cout << "unhandeld exeption";
    }
    return 0;
}

