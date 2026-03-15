//reverse a string that is input by user
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,reversed_str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int length=str.length();
    for(int i=length-1;i>=0;i--)
    {
        reversed_str+=str[i];
    }
    cout<<"The reversed string is: "<<reversed_str;
    return 0;
}