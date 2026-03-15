// recursion for sum of n natural numbers using parameterized function
#include <bits/stdc++.h>
using namespace std;
void summation(int n,int sum)
{
    if(n==0)
    {
        cout<<"sum is "<<sum<<endl;
        return;
    }
    summation(n-1,sum+n); // backtracking approach
}
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    summation(n,0);
    return 0;
}