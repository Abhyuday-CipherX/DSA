/*WAP to print the pattern
          A
         ABA
        ABCBA
       ABCDCBA */
       
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the order of the pattern: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int space=1;space<=n-i;space++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
        }
        ch-=2;
        for(int j=1;j<=i-1;j++)
        {
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
    return 0;
}       