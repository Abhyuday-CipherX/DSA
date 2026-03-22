#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0;
    while (i < s.size())
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
            i++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            i++;
        }
        else
        {

            s.erase(s.begin() + i);
        }
    }
    int start = 0, end = (int)s.size() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
};