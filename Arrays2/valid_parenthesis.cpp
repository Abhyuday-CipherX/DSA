#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    bool isValid(string s)
    {
        int n=s.size();
        int i=0;
        while(i<n)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                i++;
            }
            else if(s[i]==')' && i>0 && s[i-1]=='(')
            {
                s.erase(i-1,2);
                n-=2;
                i-=2;
            }
            else if(s[i]=='}' && i>0 && s[i-1]=='{')
            {
                s.erase(i-1,2);
                n-=2;
                i-=2;
            }
            else if(s[i]==']' && i>0 && s[i-1]=='[')
            {
                s.erase(i-1,2);
                n-=2;
                i-=2;
            }
            else
            {
                return false;
            }
        }
        return true;
}
};
int main()
{
    string str;
    cin>>str;
    solution s;
    if(s.isValid(str))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}