//WAP to check if a big number is divisble by 6
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to be checked: "<<endl;
    cin>>num;
    int n1=num,sum=0,rem;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    if(n1%2==0&&sum%3==0)
    cout<<"The number is divisible by 6"<<endl;
    else
    cout<<"The number is not divisible by 6"<<endl;
    return 0;
}