#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
    };
    int main()
    {
        int n,val;
        cout<<"Enter the size of the array: "<<endl;
        cin>>n;
        vector<int> nums;
        cout<<"Enter the elements of the array: "<<endl;
        for(int i=0;i<n;i++)
        {
            int element;
            cin>>element;
            nums.push_back(element);
        }
        cout<<"Enter the value to be removed: "<<endl;
        cin>>val;
        solution sol;
        int new_length=sol.removeElement(nums,val);
        cout<<"The new length of the array after removing the value: "<<new_length<<endl;
        cout<<"The elements of the array after removing the value: ";
        for(int i=0;i<new_length;i++)
        {
            cout<<nums[i]<<" ";
        }
        return 0;
    }
