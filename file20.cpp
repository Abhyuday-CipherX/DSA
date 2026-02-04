/*WAP to print the pattern
   *
   **
   ***
   ****
   *****
   ******
   *****
   ****
   ***
   **
   *  */

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
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
    
   }