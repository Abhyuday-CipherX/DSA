//WAP to count the number of even and odd elements in an array.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout<<"Enter the number of elements in array: "<<endl;
	cin>>n;
	int arr[n];
	int i,odd=0,even=0;
	for(i=0;i<n;i++)
	{
	  cout<<"Enter element"<<i<<" :"<<endl;
	  cin>>arr[i];
	  if(arr[i]%2==0)
	  {
	    even++;
	  }
	  else
	  {
	    odd++;
	  }
	}
	
	cout<<"The number of odd elements are: "<<odd<<endl;
	cout<<"The number of even elements are: "<<even<<endl;
	return 0;

}
