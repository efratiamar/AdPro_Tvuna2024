#include <iostream>
using namespace std;

class myException : public exception
{
public:
    virtual const char* what() const throw()
    {
        return "My exception! ";
    }
} myex;

int main()
{
    try
    {
        int y = 0;
        throw myex;
        int x = 4 / y;
    }
    catch (exception& e)
    {
        cout << "1: " << e.what() << endl;
    }
    catch (myException& e)
    {
        cout << "2: " << e.what() << endl;
    }
    catch (...)
    {
        cout << "3: unhandled exception";
    }
    return 0;
}
