//WAP to print the given digits in words.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;
    int rev=0; 
    int rem;
    while(num>0)
    {
      rem=num%10;
      rev=rev*10+rem;
      num=num/10;
    }
    while(rev>0)
    {
        rem=rev%10;
        switch (rem)
        {
        case 0: cout<<"Zero"<<"\t";
                break;
        case 1: cout<<"One"<<"\t";
                break;
        case 2: cout<<"Two"<<"\t";
                break;
        case 3: cout<<"Three"<<"\t";
                break;
        case 4: cout<<"Four"<<"\t";
                break;
        case 5: cout<<"Five"<<"\t";
                break;
        case 6: cout<<"Six"<<"\t";
                break;
        case 7: cout<<"Seven"<<"\t";
                break;
        case 8: cout<<"Eight"<<"\t";
                break;
        case 9: cout<<"Nine"<<"\t";
                break;                                                                       
        }
        rev=rev/10;
    }
    return 0;
}