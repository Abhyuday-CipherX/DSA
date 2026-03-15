//WAP to find the sum of digits of a given number.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int sum=0,rem;
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }   
    cout<<"The sum of digits of the given number is: "<<sum<<endl;
    return 0;
}