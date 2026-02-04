//WAP to find the average of elements in an array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numerb of elements in an array: "<<endl;
    cin>>n;
    int arr[n];
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        cout<<"Enter element: "<<i<<endl;
        cin>>arr[i];
        sum=sum+arr[i];
    }
    avg=sum/n;
    cout<<"The average of elements in an array is: "<<avg<<endl;
    return 0;
}