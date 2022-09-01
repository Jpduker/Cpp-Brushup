#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int longestUniqueSubstring(string str)
{
    int n = str.size();
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        vector<bool> visited(256);
        for (int j = i; j < n; ++j)
        {
            if (visited[str[j]] == true)
            {
                break;
            }
            else
            {
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }
    }
    return res;
}

int main()
{
    string str = "pwwkew";
    cout << longestUniqueSubstring(str) << endl;
    return 0;
}