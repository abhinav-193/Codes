/*
WAP to create a double linked head and display the linked head by using suitable user
    defined functions for create and delete operations.
    */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} node;

void create(node *head)
{
    scanf("%d", &head->data);

    if (head->data == -999)
    {
        head->next = NULL;
        head->prev = head;
    }
    else
    {
        head->next = (node *)malloc(sizeof(node));
        head->next->prev = head;
        create(head->next);
    }
}

node *delete_begin(node *head)
{
  node *temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    return head;
}

node *delete_mid(node *head)
{   
    int a;
    printf("Enter the position you want to delete ");
    scanf("%d", &a);
    if (a == 1)
    {
        node *temp = head;
        head = head->next; 
        head->prev = NULL;
        free(temp); 
    }
    else
    {
        node *temp = (node *)malloc(sizeof(node));
        for (int i = 1; i < a - 1; i++)
            head = head->next;
        temp = head->next;
        head->next = temp->next;
        temp->next->prev = head;
        free(temp);
    }
    return head;
}

void delete_end(node *head)
{
    node *temp = (node *)malloc(sizeof(node));
    while (head->next->next != NULL)

        head = head->next;
    temp = head->next;
    head->next = NULL;

    // head->next=head->next->next;
    //  head->next->next->prev=temp->prev;
    free(temp);
}

void display(node *head)
{

    if (head->next != NULL)
    {
        printf("%d \n", head->data);
        head = head->next;
        display(head);
    }
}

void main()
{
    int c, a;
    node *head = (node *)malloc(sizeof(node));
    head->prev = NULL;
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create(head);
    do
    {
        printf("1.Delete the node at begining \n");
        printf("2.Delete the node at given position \n");
        printf("3.Delete the node at end \n");
        printf("Enter the character for you given choice \n");

        scanf("%d", &c);
        switch (c)
        {
        case 1:
            head = delete_begin(head);
            break;

        case 2:
            //printf("Enter the position you want to delete ");
            //scanf("%d", &a);
            delete_mid(head);
            break;

        case 3:
            delete_end(head);
            break;
        default:
            printf("Wrong choice\n");
        }
        printf("The list  is \n");
        display(head);
    } while (c < 4);
}