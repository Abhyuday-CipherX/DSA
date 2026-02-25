#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    bool isPalindrome(int x)
    {
        if(x<0)
        {
            return false;
        }
        int rev=0,n1=x,rem;
        while(x>0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        return n1==rev;
    }
};
int main()
{
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;
    solution sol;
    if(sol.isPalindrome(num))
    cout<<"The number is palindrome"<<endl;
    else
    cout<<"The number is not palindrome"<<endl;
    return 0;
}