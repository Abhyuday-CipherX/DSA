// WAP to check if a number is palindrome or not
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;
    int rev=0,n1=num,rem;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(n1==rev)
        cout<<"The number is palindrome"<<endl;
    else
        cout<<"The number is not palindrome"<<endl;
}