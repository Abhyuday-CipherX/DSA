// program to find the compound interst 
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float principal,rate,time,compound_interest,amount;
    cout<<"The principal amount is: ";
    cin>>principal;
    cout<<"The rate of interest is: ";
    cin>>rate;
    cout<<"The time period in years is: ";
    cin>>time;
    amount=principal*pow((1+rate/100),time);
    cout<<"The total amount after "<<time<<" years is: "<<amount<<endl;
    compound_interest=amount-principal;
    cout<<"The compound interest is: "<<compound_interest;
    return 0;
}