#include <iostream>
using namespace std;

int main()
{
    int array[] = {20, 30, 40, 50, 55};

    cout << "Array Elements Are: ";

    for (int i = 0; i < sizeof(array) / sizeof(*array); ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    array[2] = 99;
    array[1] = 6;

    cout << "Array after modification: ";
    for (int j = 0; j < sizeof(array) / sizeof(*array); ++j)
        cout
            << array[j] << " ";
    cout << endl;
}