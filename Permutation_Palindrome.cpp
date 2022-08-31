#include <iostream>
using namespace std;

class Solution
{
public:
    string str;
    void palindrome()
    {
        int char_counts[128] = {0};
        for (int i; i < str.length(); ++i)
        {
            char_counts[str.at(i)]++;
        }
    }
};