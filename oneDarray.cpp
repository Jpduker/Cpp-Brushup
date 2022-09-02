#include <iostream>
using namespace std;

// One dimensional Array Implementation
int main()
{
    int arr[50], n, idx;
    cout << "Enter the size of Array :" << endl;
    cin >> n;
    cout << "Enter the array elements :" << endl;
    for (int idx = 0; idx < n; ++idx)
    {
        cin >> arr[idx];
    }
    cout << "The array elements are :" << endl;
    for (idx = 0; idx < n; ++idx)
    {
        cout << arr[idx] << endl;
    }
    return 0;
}