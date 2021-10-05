#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
struct LL
{
    node *start = NULL;
    node *last = NULL;
};

void create(int element, LL *l1)
{

    node *temp = new node;
    temp->data = element;
    temp->next = NULL;
    if (l1->start == NULL)
    {
        l1->start = temp;
        l1->last = temp;
    }
    else
    {
        l1->last->next = temp;
        l1->last = l1->last->next;
    }
}
void display(LL *l1)
{
    node *x = l1->start;
    if (!x)
    {
        cout << "Empty List";
        return;
    }
    while (x != NULL)
    {
        cout << x->data << "->";
        x = x->next;
    }
    cout << "NULL" << endl;
}

void merge(LL *l1, LL *l2)
{
    node *first = l1->start;
    node *second = l2->start;
    node *third = NULL;
    node *mergeLast = NULL;
    if (first->data < second->data)
    {
        third = mergeLast = first;
        first = first->next;
        third->next = NULL;
    }
    else
    {

        third = mergeLast = second;
        second = second->next;
        third->next = NULL;
    }
    while (first != NULL && second != NULL)
    {

        if (first->data < second->data)
        {
            mergeLast->next = first;
            mergeLast = first;
            first = first->next;
            mergeLast->next = NULL;
        }
        else
        {
            mergeLast->next = second;
            mergeLast = second;
            second = second->next;
            mergeLast->next = NULL;
        }
    }
    if (first)
    {
        mergeLast->next = first;
    }
    else
    {
        mergeLast->next = second;
    }
    LL *l3 = new LL;
    l3->start = third;
    // l3->last = mergeLas
    // cout << mergeLast->data << endl;
    display(l3);
}
void isLoop(LL *l1)
{

    node *p = l1->start;
    node *q = p;
    do
    {

        p = p->next;
        q = q->next;
        q = q ? q->next : q;

    } while (p && q && p != q);

    if (p == q)
    {
        cout << "There is a loop" << endl;

        return;
    }
    else
    {
        cout << "There is no loop" << endl;
        return;
    }
}

int main()
{

    LL *l1 = new LL;
    LL *l2 = new LL;
    int n1, n2;
    cout << "For list 1" << endl;
    cout << "Enter the length" << endl;
    cin >> n1;
    int x;
    for (int i = 0; i < n1; i++)
    {
        cin >> x;
        create(x, l1);
    }
    cout << "For list 2" << endl;
    cout << "Enter the length" << endl;
    cin >> n2;

    for (int i = 0; i < n2; i++)
    {
        cin >> x;
        create(x, l2);
    }
    merge(l1, l2);
    isLoop(l1);
    l1->last->next = l1->start->next->next;
    isLoop(l1);

    display(l1);
    display(l2);

    return 0;
}