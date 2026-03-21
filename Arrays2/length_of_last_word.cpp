#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int lengthOfLastWord(string s)
    {
        int n=s.size();
        int i=n-1;
        int flag;
        while(i>=0)
        {
            if(s[i]!=' ')
            {
                flag=1;
                break;
            }
            i--;
        }
        int j=i;
        while(j>=0)
        {
            if(s[j]==' ')
            {
                break;
            }
            j--;
        }
        if(flag==1)
        {
            return i-j;
        }
        else
        {
            return 0;
        }
    }
};