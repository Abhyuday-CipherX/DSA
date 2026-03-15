// using iterators
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    vector <int> v(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>v[i];
    }
    // using iterators
    cout <<"The elements in the vector are: "<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Again printing the entered elements: "<<endl;
    for(auto it :v)
    {
        cout<<it<<" ";
    }
    return 0;
}