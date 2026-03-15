#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    char ch;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>ch;
    switch(ch)
    {
        case '+': cout<<"Result: "<<num1+num2<<endl;
                  break;
        case '-': cout<<"Result: "<<num1-num2<<endl;
                  break;
        case '*': cout<<"Result: "<<num1*num2<<endl;   
                  break;
        case '/': cout<<"Result: "<<num1/num2<<endl;
                  break;
        default: cout<<"Entered a wrong operator.";                                    
    }
}