#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1)
         return s;
        int start = 0;
        int maxLen = 1;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (j - i + 1 > maxLen) {
                    int left = i;
                    int right = j;
                    bool isPal = true;
                  
                    while (left < right) {
                        if (s[left] != s[right]) {
                            isPal = false;
                            break;
                        }
                        left++;
                        right--;
                    }

                    if (isPal) {
                        start = i;
                        maxLen = j - i + 1;
                    }
                }
            }
        }

        return s.substr(start, maxLen);
    }
};
int main()
{
    Solution s;
    string str="babudcgb";
    cout<<s.longestPalindrome(str)<<endl;
    return 0;

}