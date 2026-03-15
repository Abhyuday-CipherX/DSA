// functional recursion
#include <bits/stdc++.h>
using namespace std;
int summation(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+summation(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"sum is "<<summation(n)<<endl;
    return 0;
}