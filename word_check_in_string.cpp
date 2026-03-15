//WAP to check if a word is present in a string or not.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,word;
    cout<<"Enter a string: "<<endl;
    getline(cin,str);
    cout<<"Enter the word to be searched: "<<endl;
    cin>>word;
    if(str.find(word)!=string::npos)
        cout<<"Word found in the string."<<endl;
    else
        cout<<"Word not found in the string."<<endl;
        return 0;
}