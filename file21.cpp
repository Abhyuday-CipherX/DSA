/*WAP to print the pattern
 1
 01
 101
 0101
 10101  */

 #include <iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter the order of the pattern: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
            }
            cout<<endl;
        }
        return 0;
    }
 