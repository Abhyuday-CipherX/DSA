#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int seaechInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        int i = 0;
        while (i < n)
        {
            if (nums[i] >= target)
            {
                return i;
            }
            i++;
        }
        return n;
    }
};