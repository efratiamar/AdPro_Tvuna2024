
#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    int element;
    List ls1, ls2;

    try
    {        
        for (int i = 0; i < 5; i++)
        {
            ls1.add(i);
            cout << i << " ";
        }//  4 3 2 1 0

        List ls3(ls1);

        ls1.removeFirst(); //   3 2 1 0
        for (int i = 0; i < 4; i++)
        {
            element = ls1.firstElement();//3
            cout << element << " ";
            ls2.add(element);
        }
        cout << endl;
        cout << ((ls2.search(4)) ?
            "ls2 includes 4" :
            "ls2 doesn't include 4") << endl;
        cout << ((ls2.search(3)) ?
            "ls2 includes 3" :
            "ls2 doesn't include 3") << endl;
        ls2.removeFirst();
        cout << ((ls2.search(3)) ?
            "ls2 includes 3" :
            "ls2 doesn't include 3") << endl;
    }
    catch (const char* problem)
    {
        cout << problem;
    }
    catch (...)
    {
        cout << "general error\n";
    }


    return 0;
}
