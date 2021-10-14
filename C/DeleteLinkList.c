#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct node
{
      int data;
      struct node *next;

} * first;
void create(int a[], int n)
{
      int i = 0;
      first = (struct node *)malloc(sizeof(struct node));
      struct node *temp, *last;
      first->data = a[0];
      first->next = NULL;
      last = first;
      for (int i = 1; i < n; i++)
      {
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data = a[i];
            temp->next = NULL;
            last->next = temp;
            last = temp;
            ;
      }
}
void display(struct node *p)
{
      while (p != NULL)
      {
            printf("%d ", p->data);
            p = p->next;
      }
}
int delete (struct node *p, int index)
{
      int i;
      struct node *q = NULL;
      int x = -1;
      if (index < 1)
      {
            printf("enter valid thing");
            return -1;
      }
      else if (index == 1)
      {
            q = first;
            x = first->data;
            first = first->next;
            free(q);
            return x;
      }
      else {
            for(int i=0;i<index-1;i++)
            {
                  q=p;
                  p=p->next;
            }
            q->next=p->next;
            x=p->data;
            free(p);
            return x;
      }

}

int main()
{
      int a[] = {1, 2, 3, 4, 5};
      create(a, 5);
      delete(first,2);
      display(first);
}
