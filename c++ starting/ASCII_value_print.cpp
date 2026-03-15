// to print the ascii value of character entered by user
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    int ascii_value=ch;
    cout<<"The ASCII value of "<<ch<<" is "<<ascii_value;
    return 0;
}