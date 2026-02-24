#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    void leftRotate(vector<int> &arr, int k)
    {
        int n=arr.size();
        k=k%n;
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+n-k);
        reverse(arr.begin()+n-k,arr.end());
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
    int k;
    cout<<"Enter the number of positions to left rotate the array: "<<endl;
    cin>>k;
    solution sol;
    sol.leftRotate(arr,k);
    cout<<"The left rotated array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}