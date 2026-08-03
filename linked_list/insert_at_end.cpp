//Inserting a node at the end of linked list
include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int value)
    {
    data = value;
    next=nullptr;
    }
}
Node* insert_at_end(int x, Node* head)
{
    Node* newNode = new Node(x);
    if(head==nullptr)
    {
        return newNode;
    }
    Node* last = head;
    while(last->next!=nullptr)
    {
        last=last->next;
    }
    last->next= newNode;
    return head;
    
}
void print(Node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data;
        if(head->next!=nullptr)
        {
            cout<<"->";
            head = head -> next;
        }
        cout<<endl;
    }
}
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head = insertAtEnd(head, 6);
    printList(head);
    return 0;
}