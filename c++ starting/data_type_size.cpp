// finding the size of each data type in C++
#include <iostream>
using namespace std;
int main()
{
    int a; float b; double c; char d; bool e;
    cout<<"The size of integer data type: "<<sizeof(a)<<" bytes"<<endl;
    cout<<"The size of float data type: "<<sizeof(b)<<" bytes"<<endl;
    cout<<"The size of double data type: "<<sizeof(c)<<" bytes"<<endl;              
    cout<<"The size of character data type: "<<sizeof(d)<<" bytes"<<endl;
    cout<<"The size of boolean data type: "<<sizeof(e)<<" bytes"<<endl;
    return 0;
}