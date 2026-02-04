//WAP to check if an array is sorted or not.
#include <bits/stdc++.h>
using namespace std;
int ascending(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 1;
        }
    }
    return 0;
}
int descending(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    if(ascending(arr,n)==1)
    {
        if(descending(arr,n)==1)
        {
            cout<<"The array is not sorted."<<endl;
        }
        else
        {
            cout<<"The array is sorted in descending order."<<endl;
        }
    }
    if(descending(arr,n)==1)
    {
        if(ascending(arr,n)==1)
        {
            cout<<"The array is not sorted."<<endl;
        }
        else
        {
            cout<<"The array is sorted in ascending order."<<endl;
        }
    }
    return 0;
}