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
        cout << *ptr << " \t";
        cout << ptr << endl;
        ptr++;
    }
}