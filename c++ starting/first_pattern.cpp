#include<iostream>
using namespace std;
int main()
{
    int i,j,c,num;
    cout<<"Enter the number of rows for the pattern"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        c=1;
        for(j=1;j<=i;j++)
        {
            cout<<c;
            c++;
        }
        cout<<"\n";
    }
    return 0;
}