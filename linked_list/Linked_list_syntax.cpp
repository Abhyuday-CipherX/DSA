// basic syntax for linked list in cpp
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
int main()
{
    Node* head = new Node(1);
    return 0;
}