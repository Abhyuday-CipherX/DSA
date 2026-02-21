// unordered map for frequency counting
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arrr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arrr[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arrr[i]]++;
    }
    int q;
    cout<<"Enter the number of queries: "<<endl;
    cin>>q;
    while(q--)
    {
        int x;
        cout<<"Enter the element to find its frequency: "<<endl;
        cin>>x;
        cout<<"The frequency of "<<x<<" is: "<<mp[x]<<endl;

    }
    return 0;
}