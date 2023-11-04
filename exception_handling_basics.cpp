#include <iostream>
using namespace std;

int main()
{
    int x = -1;

    try
    {
        if (x < 0)
        {
            throw x;
            cout << "After throw(never exec)" << endl;
        }
    }

    catch (int x)
    {
        cout << "Exception caught" << endl;
    }

    cout << "After catch" << endl;

    return 0;
}