#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

Node *head=NULL;

void creat_cll(int A[],int n)
{
    head=new Node;
    head->data=A[0];
    head->next=head;

    Node* current=head;

    for(int i=1;i<n;i++)
    {
       Node *temp=new Node;
       temp->data=A[i];
       current->next=temp;
       current=temp;
       temp->next=head;
    }

}

/*void display()
{
   Node *ptr=head;
   do
   {
    cout<<ptr->data<<"->";
    ptr=ptr->next;
   }
   while(ptr!=head);
}*/

void recuDisplay(Node *ptr)
{
    static int flag=0;
    if(ptr!=head || flag==0)
    {
      flag=1;
      cout<<ptr->data<<"->";
      recuDisplay(ptr->next);
    }

    flag=0;
}

int length()
{
   Node *ptr=head;
   int len=0;
   int flag=0;
   while(ptr!=head || flag==1)
   {
       flag=1;
       len++;
       ptr=ptr->next;
   }
   return len;
}


int del_in_cll(int pos)
{
    int x=-1;
    if(pos>length())
    {
        cout<<"Invalid Position"<<endl;
    }
    else if(pos==1)
    {
         Node *ptr=head;
         while(ptr->next!=head)
         {
           ptr=ptr->next;
         }
         Node *q=head;
         head=head->next;
         ptr->next=head;
         x=q->data;
         delete(q);
    }

    else
    {
        Node* ptr=head;
        for (int i = 0; i < pos-2; i++)
        {
            ptr=ptr->next;
        }
        Node *q=ptr->next;
        ptr->next=q->next;
        x=q->data;
        delete(q);
    }
    return x;
}


int main()
{
    int A[]={1,2,3,4,5};
    creat_cll(A,sizeof(A)/sizeof(A[0]));
    recuDisplay(head);
    cout<<endl<<del_in_cll(8)<<endl;
    recuDisplay(head);
}