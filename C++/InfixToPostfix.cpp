#include<bits/stdc++.h>
using namespace std;
#define s2 10

struct stk
{
    char arr[s2];
    int top;
};
typedef struct stk Stack;
void initialize(Stack *p)
{
    if(p!= NULL)
    p-> top = -1;
    else 
    exit(0);
}
int isFull(Stack *p)
{
    if(p->top == s2-1)
    return 1;
    else 
    return 0;
}
int isEmpty(Stack *p)
{
    if(p->top == -1)
    return 1;
    else
    return 0;
}
char pop(Stack *p)
{
    char t;
    if(!isEmpty(p))
    {
        t=p->arr[p->top];
        p->top--;
    }
    else
    cout<<"Underflow"<<endl;
}
void push(Stack *p,char v)
{
    if(!isFull(p))
    {
        p->top++;
        p->arr[p->top]=v;
    }
    else
    cout<<"Overflow"<<endl;
}
char peek(Stack *p)
{
    if(!isEmpty(p))
        return (p->arr[p->top]);
    else
    return 0;
}
int Prec(char ch)
{
    int p;
    switch(ch)
    {
	    case '+':
	    case '-':
			p=1;
			break;
	    case '*':
	    case '/':
			p=2;
			break;
	    case '^':
			p=3;
			break;
	    default:
			p=0;
			break;
   }
    return(p);
}
int isOperand(char ch)
{
    if(ch == '+'|| ch=='-'||ch=='*'||ch=='/'||ch=='^')
    return 0;
    else
    return 1;
}
void InfixToPostfix(char *exp, Stack *st)
{
    int i,k=-1;
    char post[100];
    while(exp[i])
    {
        if(isOperand(exp[i]))
            post[++k] = exp[i];
        else if(exp[i]=='(')
            push(st,exp[i]);
        else if(exp[i]==')')
        {
            while(peek(st) != '(')
                post[++k] = pop(st);
            pop(st);
        }        
        else
        {
            while(!isEmpty(st) && (Prec(exp[i]) <= Prec(exp[i])))
                post[++k] = pop(st);
            push(st,exp[i]);
        }
        i++;
    }
    while(!isEmpty(st))
        post[++k] = pop(st);
    post[++k] = '\0';
    printf( "\n%s", post);
}
int main()
{
    Stack *st = new Stack;
    char input[100] = "a+b*c/d";    
    InfixToPostfix(input,st);
    return 0;
}