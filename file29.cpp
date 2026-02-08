// vector initialization and input/output
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of elements in array: "<<endl;
  cin>>n;
  vector<int> arr(n);
   for(int i=0;i<n;i++)
   {
    cout<<"Enter element "<<i<<" :"<<endl;
    cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<endl;
   }


    return 0;
}