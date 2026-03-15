#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int n=nums.size();
        int i=0,j;
        while(i<n)
        {
            j=i+1;
            while(j<n)
            {
                if(nums[i]+nums[j]==target)
                {
                    return {i,j};
                }
                j++;
            }
            i++;
        }
        return{};
    }
};
int main()
{
    solution s;
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> ans=s.twoSum(nums,target);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
}