// using recursion 
#include <bits/stdc++.h>
using namespace std;
void print(int n,string s)
{
    if(n==0)
    {
        return;
    }
    cout<<s<<endl;
    print(n-1,s);
}
int main()
{
    int n;
    string s;
    cout<<"Enter your name and number of times you want to print it: ";
    cin>>s>>n;
    print(n,s);
    return 0;
}