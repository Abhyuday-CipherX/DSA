//using function recursion to print the fibonacci series up to n terms
#include<iostream>
using namespace std;
int fibonacci(int n);
int main()
{
    int n, rev;
    cout<<"Enter the number of terms upto which the series is to be printed: ";
    cin>>n;
    cout<<"Fibonacci series up to "<<n<<" terms is: ";
    for (int i=0;i<n;i++)
    {
        rev=fibonacci(i);
        cout<<rev<<" ";
    }
    return 0;
}
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
    }

    
    