// hashing for characters
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.length();i++)
    {
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter the number of queries: "<<endl;
    cin>>q;
    while(q--)
    {
        char c;
        cout<<"Enter the character: "<<endl;
        cin>>c;
        cout<<c<<" is present "<<hash[c-'a']<<" times"<<endl;
    }
    return 0;
}