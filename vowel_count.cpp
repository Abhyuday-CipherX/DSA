//WAP to count vowels in a string.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: "<<endl;
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        char ch=tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            count++;
        }
    }
    cout<<"The number of vowels in the given string is: "<<count<<endl;
    return 0;
}