#include <bits/stdc++.h>
using namespace std;
class solution
{
    public :
    int strStr(string haystack, string needle)
    {
        int n=haystack.size();
        int m=needle.size();
        for(int i=0;i<=n;i++)
        {
            int j=0;
            for(;j<m;j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    break;
                }
            }
            if(j==m)
            {
                return i;
            }
        }
        return -1;

    }
};
int main()
{
    solution s;
    string haystack="sadbutsad";
    string needle="sad";
    cout<<s.strStr(haystack,needle);
    return 0;
}