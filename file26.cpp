/*WAP to print the pattern
    E
    D E
    C D E
    B C D E
    A B C D E  */

#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the order of the pattern: "<<endl;
     cin>>n;
     char ch='A'+n-1;
     for(char i=ch;i>='A';i--)
     {
         for(char j=i;j<=ch;j++)
         {
            cout<<j<<" ";
         }
         cout<<endl;
     }
        return 0;
        

}    