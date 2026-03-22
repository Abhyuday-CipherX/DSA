#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    vector<int> plusOne(vector<int>& digits)
    {
        int n=digits.size();
        digits[n-1]=digits[n-1]+1;
        for(int i=n-1;i>0;i--)
        {
            if(digits[i]>9)
            {
                digits[i]=0;
                digits[i-1]=digits[i-1]+1;
            }
        }
        if(digits[0]>9)
        {
            digits[0]=0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
int main()
{
    solution s;
    vector<int> digits={9,9,9};
    vector<int> ans=s.plusOne(digits);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}