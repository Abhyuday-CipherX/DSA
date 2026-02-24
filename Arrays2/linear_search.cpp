#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int linearSearch(vector<int> &arr, int target)
    {
        int n= arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==target)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array."<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element to be searched: "<<endl;
    cin>>target;
    solution sol;
    int res=sol.linearSearch(arr,target);
    if(res==-1)
    {
        cout<<"Element not found in the array."<<endl;
    }
    else
    {
        cout<<"Element found at index: "<<res<<endl;
    }
}