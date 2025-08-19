#include<iostream>
using namespace std;
class Node{
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
void PrintLinkedList(Node* Head)
{
    Node* temp=Head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* sortTwoLinkedList(Node* list1,Node* list2)
{
    Node* dummyNode=new Node(-1);
    Node* temp=dummyNode;
    while(list1!=nullptr && list2!=nullptr)
    {
        if(list1->data<=list2->data)
        {
            temp->next=list1;
            list1=list1->next;
        }else
        {
            temp->next=list2;
            list2=list2->next;
        }
        temp=temp->next;
    }
    if(list1!=nullptr)
    {
        temp->next=list1;
    }
    else
    temp->next=list2;

    return dummyNode->next;

}
int main(){
    Node* head1= new Node(1);
    head1->next=new Node(3);
    head1->next->next=new Node(5);
    head1->next->next->next=new Node(7);
    Node* head2=new Node(2);
    head2->next=new Node(4);
    head2->next->next=new Node(6);
    head2->next->next->next=new Node(8);
    cout<<"List1"<<endl;
    PrintLinkedList(head1);
    cout<<"\n List2"<<endl;
    PrintLinkedList(head2);
    Node* res=sortTwoLinkedList(head1,head2);
    cout<<"\n res list"<<endl;
    PrintLinkedList(res);
    return 0;
}
