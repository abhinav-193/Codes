#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL, *second = NULL, *third = NULL;
void Display(struct node *p)
{
    while (p!=NULL)
    {
      printf("%d ",p->data);
 p=p->next;
    }
}
void create(int a[], int n)
{
    int i;
    struct node *t,*last;
    node *first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        node *t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// void removeduplicate(struct node *p)
// {
//     struct node *q=p->next;
//     while (q != NULL)
//     {
//         if (p->data != q->data)
//         {
//             p = q;
//             q = q->next;
//         }
//         else
//         {
//             p->next=q->next;
//             delete q;
//             q = p->next;
//         }
//     }
// }
void RemoveDuplicate(struct node *p)
{
 struct node *q=p->next;
 
 while(q!=NULL)
 {
 if(p->data!=q->data)
 {
 p=q;
 q=q->next;
 }
 else
 {
 p->next=q->next;
 free(q);
 q=p->next;
 }
 }

}
int main()
{
    cout<<"heap"<<endl;
     int a[]={10,20,20,40,50,50,50,60};
 create(a,8);

    
    RemoveDuplicate(first);
    cout<<"remove"<<endl;
    Display(first);
    cout<<"heap";
    return 0;
}
