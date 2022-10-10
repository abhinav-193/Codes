#include <stdio.h>
#include <stdlib.h>

struct stack
{
  int size;
  int top;
  int *s;
}s1,s2;

void push(struct stack *st,int x)
{
    st->top++;
    st->s[st->top]=x;

}

int pop(struct stack *st)
{
    int x;
    x=st->s[st->top];
    st->top--;
    return x;
}

int isEmpty(struct stack st)
{
    if(st.top==0)
        return 1;
    else
        return 0;
}

void enqueue(int x)
{
    if(!(s1.top+s2.top==s1.size))
        push(&s1,x);
    else
        printf("Queue is full\n");
}

int dequeue()
{
    int x=-1;
    if(isEmpty(s2))
    {
        if(isEmpty(s1))
        {
            printf("Queue is empty\n");
            return x;
        }
        else
        {
            while(!(isEmpty(s1)))
                push(&s2,pop(&s1));
        }
    }
    return pop(&s2);
}

void display()
{   int i,t;
    if(!(isEmpty(s2)))
    {
        t=s2.top;
        for(i=t;i>0;i--)
            printf("%d  ",s2.s[i]);
    }
    if(!(isEmpty(s1)))
    {
        t=s1.top;
        for(i=1;i<=t;i++)
            printf("%d  ",s1.s[i]);
    }
    printf("\n");
}

int main()
{
    printf("Enter the size of the Queue:");
    scanf("%d",&s1.size);
    s2.size=s1.size;
    s1.top=0;
    s2.top=0;
    s1.s = (int *) malloc(s1.size * sizeof(int));
    s2.s = (int *) malloc(s1.size * sizeof(int));

    int f = 0, a;
    char ch = 'y';
    while (ch == 'y'||ch == 'Y') {
        printf("Enter ur choice\t 1.Add to queue\t 2.Remove from queue\t 3.Display\t 4.Exit\t: ");
        scanf("%d", &f);
        switch(f) {
            case 1 : printf("Enter the element to be added to queue : ");
                     scanf("%d", &a);
                     enqueue(a);
                     break;
            case 2 : dequeue();
                     break;
            case 3 : display();
                     break;
            case 4 : ch=a;
                     break;
            default : printf("Invalid\n");
                      break;
        }
    }
}
