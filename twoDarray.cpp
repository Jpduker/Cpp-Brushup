#include <iostream>
using namespace std;

int main()
{
    int arr[2][2];
    cout << "Enter the elements :" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "The Elements are: " << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cout << arr[row][col] << " " << endl;
        }
    }
    return 0;
}
