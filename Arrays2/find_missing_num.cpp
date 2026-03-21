#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int missingNumber(vector<int>& nums)
    {
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            int correct=nums[i];
            if(nums[i]<n && nums[i]!=nums[correct])
            {
                swap(nums[i],nums[correct]);
            }
            else
            {
                i++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
        return n;
    }

};
int main()
{
    vector<int> nums={3,0,1};
    solution s;
    cout<<s.missingNumber(nums);
    return 0;
}