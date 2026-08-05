// Program to find the sum and count of nodes 
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data = value;
        next=nullptr;
    }
};
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    int sum=0,count=0;
    Node* temp=head;
    while(temp!=nullptr)
    {
        sum+=temp->data;
        count++;
        temp=temp->next;
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"count = "<<count;
    return 0;
}