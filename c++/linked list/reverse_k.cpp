#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
    Node (int data1)
    {
        data=data1;
        next=nullptr;
    }
};
Node* insert_beg(Node* head,int data)
{
    Node* temp;
    temp=new Node(data,head);
    return temp;
}
Node* Reverse(Node* head)
{
    Node* prev;
    Node* temp;
    Node* next;
    prev=nullptr;
    temp=head;
    next=temp->next;
    while(temp!=nullptr)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    return prev;
}
void Print_ll(Node* head)
{
    Node* temp;
    temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node* head;
    head=new Node(1);
    head=insert_beg(head,2);
    head=insert_beg(head,3);
    head=insert_beg(head,4);
    head=insert_beg(head,5);
    head=insert_beg(head,6);
    head=insert_beg(head,7);
    head=insert_beg(head,8);
    cout<<"linked list ";
    Print_ll(head);
    head=Reverse(head);
    cout<<"\nReverse ";
    Print_ll(head);
}
