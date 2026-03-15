//WAP to check is a number is a perfect square or not.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to be checked: "<<endl;
    cin>>num;
    if(num<0)
    {
        cout<<"Negative numbers cannot be perfect squares."<<endl;
        return 0;
    }
    int i,flag=0;
    for(i=0;i<=num;i++)
    {
        if(i*i==num)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        cout<<"The number "<<num<<" is a perfect square."<<endl;
    }
    else
    {
        cout<<"The number "<<num<<" is not a perfect square."<<endl;
    }
    return 0;
}