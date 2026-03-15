/*WAP to print the pattern
        *****
        ****
        ***
        **
        * */
       #include <iostream>
       using namespace std;
       int main()
       {
        int n;
        cout<<"Enter the order of the pattern: "<<endl;
        cin>>n;
        for(int i=n;i>=i;i--)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        return 0;
       }