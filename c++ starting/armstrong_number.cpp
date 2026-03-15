// program for armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,n1,n2,c=0,sum=0,rem;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    n1=num;
    n2=num;
    while(num>0)
    {
        c++;
        num=num/10;
    }
    while(n1>0)
    {
        rem=n1%10;
        sum=sum+pow(rem,c);
        n1=n1/10;
    }
     if(sum==n2)
     {
        cout<<n2<<" is an armstrong number."<<endl;
     }
     else
     {
        cout<<n2<<" is not an armstrong number."<<endl;
     }
     return 0;
}