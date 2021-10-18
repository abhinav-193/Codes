//question link - https://practice.geeksforgeeks.org/problems/count-pairs-whose-sum-is-equal-to-x/1/?category[]=Linked%20List&category[]=Linked%20List&page=1&query=category[]Linked%20Listpage1category[]Linked%20List

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node * next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
}*head;
void insert()
{
    int n,i,value;
    struct Node *temp;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>value;
        if(i==0)
        {
            head = new Node(value);
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next =NULL;
        }
    }    
}
class Solution
{
    public:
    int CountPairs(struct Node* head1, struct Node* head2, int x)
    {
        int sum = head1->data+head2->data;
        if(sum==x)
        return 1;
        else 
        return 0;
    }
};
int main()
{
    insert();
    Solution ob;
    int x;
    cin>>x;
    while(head->next!=NULL)
    {
        int s = ob.CountPairs(head,head->next,x);       
        if(s==1)
        {
            cout<<head->data<<","<<head->next->data<<endl;
        }
        head=head->next;
    }
    return 0;    
}