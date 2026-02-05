// input array size from user
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter number of elements in the array: "<<endl;
    cin>>n;
    vector<int> arr(n);
    int i;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"You have entered the following elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
} 

