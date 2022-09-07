#include <iostream>
using namespace std;
int main()
{

    cout << "\nEnter the no. of boxes: ";
    int n, flag = 0;
    cin >> n; // 5
    if (n > 0 && n <= 10)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cout << "\nEnter the no. of chocolates in box " << i + 1 << ":";
            cin >> a[i]; // 42 3 6 1
            if (i == 0 && a[i] % 2 != 0)
            {
                cout << "\nSorry !!! The first box always should contain positive even no. of chocolates";
                return 0;
            }
            else
            {
                if (a[i] % 2 == 0)
                {           // 4%2==0 2%2 == 0 3%2!=0 6%2 == 0_1%2!=0
                    flag++; // flag=1 flag=2 flag=3
                }
            }
        }
        cout << "\nNo. of chocolates in each box: ";
        for (int i = flag - 1; i < n; i++)
        {                        // i = 2 to 4 (3 times)
            cout << a[i] << " "; // 3 6 1
        }
    }
    else
    {
        cout << "\nInvalid input";
    }
    return 0;
}