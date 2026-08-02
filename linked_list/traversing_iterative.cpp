// Traversing a linked list iteratively
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};
void traverse(Node* head)
{
    while(head!= nullptr)
    {
        cout<<head->data;
        if(head->next!= nullptr)
        {
            cout<<"->";
        }
        head = head->next;
    }
    cout<<endl;
}
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    traverse(head);
    return 0;
}