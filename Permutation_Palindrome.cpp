#include <iostream>
using namespace std;

class Solution
{
public:
    string str;
    void palindrome(string str)
    {
        int char_counts[128] = {0};
        for (int i = 0; i < str.length(); ++i)
        {
            char_counts[int(str[i])] += 1;
        }
        int count = 0;
        for (int i = 0; i < 128; i++)
        {
            count += char_counts[i] % 2;
        }
        (count <= 1) ? cout << "true" : cout << "false";
    }
};

int main()
{
    Solution pal;
    pal.palindrome("app");
}