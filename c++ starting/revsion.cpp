// program to revise c++ syntax
#include<iostream>
#include<string>
#include<limits>
using namespace std;
int main()
{
    int a,b,sum;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    sum=a+b;
    cout<<"THe sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
    cout<<"Printing statements "<<endl<<"in new "<<endl<<"lines."<<endl;
    cout<<"input a string:"<<endl;
    string str;
    cin>>str;
    cout<<"The string entered is: "<<str<<endl;
    cout<<"The length of the string is: "<<str.length()<<endl;
    cout<<"Entering a whole line: "<<endl;
  /*  string string2;
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
     getline(cin,string2);
    cout<<"The line entered is: "<<string2<<endl;*/
    string str2;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,str2);
    cout<<"The line entered is: "<<str2<<endl;
}