#include <iostream>
using namespace std;

void choclateBox()
{
    int n;
    cout << "Enter the no of Boxes: ";
    cin >> n;
    int nc;
    int Choclates[n];
    for (int i = 1; i < n + 1; i++)
    {
        cout << "Enter the no of choclates in Box " << i << ": ";
        cin >> nc;

        if (nc % 2 == 0)
        {
            Choclates[i] = nc;
        }
    }
    cout << "Num of choclates in each boxes are:  " << endl;
    for (int j = 1; j < n + 1; j++)
    {

        cout << Choclates[j] << " ";
    }
}
int main()
{
    choclateBox();
}