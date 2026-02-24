#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    void moveZeroes(vector<int>& nums)
    {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array." <<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solution sol;
    sol.moveZeroes(arr);
    cout << "The array after moving zeroes: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}