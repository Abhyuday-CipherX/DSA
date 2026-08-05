// deleting a node from the end
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
        next=nullptr;
    }
}
Node*deleteHead(Node* head)
{
    if(head==nullptr)
    {
        return nullptr;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
void printList(Node* head)
{
    Node* curr = head;
    while(curr!=nullptr)
    {
        cout<< curr->data;
         if (curr->next != nullptr) 
        {
            cout << " -> ";
        }
        curr = curr->next;
    }
    cout << endl;
}
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next=new Node(4);
    printList(head);
    head=deleteHead(head);
    printList(head);
    return 0;
}