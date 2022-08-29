#include <iostream>
using namespace std;

int main()
{
    int arrlength = 5;

    int *ptr = new int[arrlength]{20, 30, 40, 50, 60};

    cout << " Using pointer to increment " << endl;
    cout << " Value\tAddress " << endl;

    while (*ptr)
    {
        cout << *ptr << "\t";
        cout << ptr << endl;
        ptr++;
    }
    cout << endl;
    ptr = ptr - 5;

    cout << " Using pointer index " << endl;
    cout << " Value\tAddress " << endl;
    for (int i = 0; i < arrlength; ++i)
    {
        cout << ptr[i] << "\t";
        cout << &ptr[i] << endl;
    }

    return 0;
}