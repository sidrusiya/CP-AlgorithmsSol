#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

struct Node *duplicate(Node*A)
{
    Node *dummy=new Node(0);
    dummy->next=A;
    int flag=0;
    Node* temp=dummy;
    while(temp->next!=NULL)
    {
        if(temp->next->data==temp->next->next->data)
        {
            flag++;
            temp->next=temp->next->next;
        }
        else if(flag)
        {
            temp->next=temp->next->next;
        }
        else
            temp=temp->next;
    }
//    free(dummy);
    return A;
}

int main()
{
    int x;
    Node* head=new Node(1);
    Node *temp=head;
    cout<<"\n Enter 10 node values\n";
    for(int i=0;i<10;i++)
    {
        cin>>x;
        Node *NN=new Node(x);
        temp->next=NN;
        temp=temp->next;
    }
    Node *B=duplicate(head);
    temp=B;
    cout<<"List after removing duplicates\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
