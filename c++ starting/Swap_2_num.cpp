// swap two numbers using user defined function
#include <iostream>
using namespace std;
void swap(int a,int b);
int main()
{
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Before swapping the first number is "<<num1<<" and second number is "<<num2<<endl;
    swap(num1,num2);
    return 0;
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping the first number is "<<a<<" and second number is "<<b;
}