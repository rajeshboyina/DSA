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
        Node(int data1)
        {
            data=data1;
            next=nullptr;
        }
};
int intersection(Node* l1,Node*l2)
{
    int n=0;
    Node* d1=l1;
    Node* d2=l2;
    while(d1!=d2)
    {
        if(d1!=nullptr)
        cout<<"l1= "<<d1->data<<endl;
        else
            cout<<"l1= end ";
        if(d2!=nullptr)
        cout<<"l2= "<<d2->data<<endl;
        else
        cout<<"l2= end ";
        d1=d1==nullptr?l2:d1->next;
        d2=d2==nullptr?l1:d2->next;
        /*if(d1!=nullptr)
        cout<<"l1= "<<d1->data<<endl;
        else
            cout<<"l1= end ";
        if(d2!=nullptr)
        cout<<"l2= "<<d2->data<<endl;
        else
        cout<<"l2= end ";*/
    }
    while(d1!=nullptr)
    {
        d1=d1->next;
        n++;
    }
    return n;
}
void PrintLinkedList(Node* l1)
{
    Node* temp=l1;
    while(l1!=nullptr)
    {
        cout<<l1->data<<"  ";
        l1=l1->next;
    }
    cout<<endl;
}
int main()
{
    Node* head1= new Node(1);
    head1->next=new Node(2);
    head1->next->next=new Node(3);
    head1->next->next->next=new Node(4);
    head1->next->next->next->next=new Node(5);
    head1->next->next->next->next->next=new Node(8);
    Node* head2= new Node(6);
    head2->next=new Node(7);
    head2->next->next=head1->next->next->next;
    cout<<"Linked List1  ";
    PrintLinkedList(head1);
    cout<<"Linked List2 ";
    PrintLinkedList(head2);
    cout<<intersection(head1,head2);
    return 0;
}
