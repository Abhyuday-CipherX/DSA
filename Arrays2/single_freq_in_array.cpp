#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int singleNumber(vector<int>& nums)
    {
        int n=nums.size();
        int ans=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
            if(count==1)
            {
                ans=nums[i];
            }
             count=0;
        }
        return ans;
    }

};
int main()
{
    vector<int> nums={4,1,2,1,2};
    solution s;
    cout<<s.singleNumber(nums);
    return 0;
}