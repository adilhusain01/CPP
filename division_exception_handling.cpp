#include <iostream>
using namespace std;

float division(int x, int y)
{
    cout << "In division function" << endl;
    return x / y;
}

int main()
{
    int i = 50, j = 0;

    try
    {
        float k = division(i, j);
        cout << k << endl;
    }

    catch (const char *e)
    {
        cout << e << endl;
    }

    return 0;
}