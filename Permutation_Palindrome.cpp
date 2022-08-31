#include <iostream>
using namespace std;

class Solution
{
public:
    string str;
    void palindrome(string str)
    {
        int char_counts[128] = {0};
        for (int i; i < str.length(); ++i)
        {
            char_counts[str.at(i)]++;
        }
        int count = 0;
        for (int i; i < 128; i++)
        {
            count += char_counts[i] % 2;
        }
        (count <= 1) ? cout << "true" : cout << "false";
    }
};

int main()
{
    Solution pal;
    pal.palindrome("rac");
}