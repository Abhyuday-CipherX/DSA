// recursive function to reverse an array
#include <iostream>
using namespace std;
void revarr(int arr[], int start, int end)
{
    if(start>=end)
    {
        return;
    }
    swap(arr[start],arr[end]);
    revarr(arr,start+1,end-1);

}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    revarr(arr,0,n-1);
    cout<<"Reversed array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}