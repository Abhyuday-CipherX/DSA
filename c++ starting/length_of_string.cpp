// input a string and output its length
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a atring: ";
    getline(cin,str);
    int length=str.length();
    cout<<"The string entered is: "<<str<<endl;
    cout<<"The length of the string is: "<<length;
}