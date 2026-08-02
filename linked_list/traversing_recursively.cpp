// Traversing a linked list recursively
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
void traverse(Node* head)
{
    if(head == nullptr)
    {
        cout<<endl;
        return;
    }
    cout<<head->data;
    if(head->next!= nullptr)
    {
        cout<<"->";
    }
    traverse(head->next);
}
int main()
{
     Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    traverse(head);
}