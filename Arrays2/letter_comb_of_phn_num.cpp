#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
     vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if(digits.empty())
        {
            return ans;
        }
        vector<string> num_rel={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        ans.push_back("");
        for(int i=0;i<digits.size();i++)
        {
            int digit=digits[i]-'0';
            vector<string> temp;
            for(string s:ans)
            {
                for(char c:num_rel[digit])
                {
                    temp.push_back(s+c);
                }
            }
            ans=temp;
        }
        return ans;
    }
};
int main()
{
    solution s;
    string digits="234";
    vector<string> ans=s.letterCombinations(digits);
    for(string s:ans)
    {
        cout<<s<<" ";
    }
    return 0;
}