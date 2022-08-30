#include <iostream>
using namespace std;

int main()
{
    string word1 = "pales";
    string word2 = "pales";
    int m = word1.length();
    int n = word2.length();

    if (n < (m - 1) || n > (m + 1))
    {
        cout << "false";
    }
    else
    {
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (word1[i] == word2[i])
            {
                count++;
            }
        }
        if (n == m)
        {
            (count == (n - 1)) ? cout << "true" : cout << "false";
        }
        if (n != m)
        {
            (count < n) ? cout << "false" : cout << "true";
        }
    }
}
