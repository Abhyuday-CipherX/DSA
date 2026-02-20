// hashing
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int hash[n+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[v[i]]++;
    }
    for(int i=0;i<n+1;i++)
    {
        if(hash[i]>0)
        {
            cout<<i<<" is present "<<hash[i]<<" times"<<endl;
        }
    }
}