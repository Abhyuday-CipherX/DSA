#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        int ans = 0;
        int i = 0;

        while (i < n)
        {
            int j = i;
            int count = 0;

            while (j < n)
            {
                int duplicate_found = 0; 

                
                for (int k = i; k < j; k++)
                {
                    if (s[k] == s[j])
                    {
                        duplicate_found = 1;
                        break;
                    }
                }
                
                if (duplicate_found == 1)
                {
                    break;
                }

                count++;
                j++;
            }

           
            if (count > ans)
            {
                ans = count;
            }

            i++;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    string str = "abcabcbb";
    cout << s.lengthOfLongestSubstring(str);
}