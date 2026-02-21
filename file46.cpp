// string hashing using maps
#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str;
    cout<<"Enter a string: "<<endl;
    getline(cin, str);
    map<char,int> mp;
    for(int i=0; i<str.size(); i++)
    {
        mp[str[i]]++;
    }
    int q;
    cout<<"Enter the number of queries: "<<endl;
    cin>>q;
    while(q--)
    {
        char x;
        cout<<"Enter the character to find its frequency: "<<endl;
        cin>>x;
        cout<<"The frequency of "<<x<<" is: "<<mp[x]<<endl;

    }
    return 0;
    
}