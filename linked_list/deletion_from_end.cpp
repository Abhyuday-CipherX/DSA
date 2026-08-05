// Deleting a node fron the end
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    ind data;
    Node* next;
    Node(int value)
    {
        data = value;
        next=nullptr;
    }
};
Node* delete_from_end(Node* head)
{
    if(head== nullptr)
    return nullptr;
    if(head->next=nullptr){
    delete head;
    return nullptr;
    }
    Node* secondlast=head;
    while(secondlast->next->next!=nullptr)
    {
        secondlast=secondlast->next;
    }
    delete secondlast->next;
    secondlast->next = nullptr;
    return head;
}
void printList(Node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"Nullptr"<<endl;
}
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head = delete_from_end(head);
    printList(head);
    return 0;
}
