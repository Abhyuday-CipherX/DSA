#include<bits/stdc++.h>
using namespace std;
class solution
{
    public :
    string longestCommonPrefix(vector<string> &str)
    {
        int n=str.size();
        if(n==0)
        {
            return "";

        }
        string ans="";
        for(int i=0;i<str[0].size();i++)
        {
            char c=str[0][i];
            for(int j=1;j<n;j++)
            {
                if(i>=str[j].size() || str[j][i]!=c)
                {
                    return ans;
                }
            }
            ans+=c;
        }
        return ans;
    }
};
int main()
{
    solution s;
    vector<string> str={"flower","flow","flight"};
    cout<<s.longestCommonPrefix(str);
    return 0;
}