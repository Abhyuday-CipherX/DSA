// input an array and output the sum of its elements
#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"Sum of the elements in the array: "<<sum;
    return 0;
}