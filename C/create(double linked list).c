//Creation of Double Linked List
#include<stdio.h>
#include<stdlib.h>
struct DoubleLinkedList
{
    int info;
    struct DoubleLinkedList *prev;
    struct DoubleLinkedList *next;
};
void create(struct DoubleLinkedList *node)
{
    int j=1;
    int value;
    char ch;
    printf("Enter data for node %d:",j);
    scanf("%d",&node->info);
    node->next = NULL;
    j++;

    do
    {
        printf("How many node do you want to enter?:");
        scanf("%d",&value);

        if(value==0)
        break;

        for (int i = 0; i < value; i++)
        {
            node->next = (struct DoubleLinkedList*) malloc(1 * sizeof(struct DoubleLinkedList));
            node->next->prev = node;
            if(node->next == NULL)
                printf("Error\n");
            node = node->next;
            printf("Enter data for node %d:",j);
            scanf("%d",&node->info);
            node->next = NULL;
            j++;
        }

        printf("Do you want to enter for more nodes?");
        printf("Enter Y for yes , any other key to exit:");
        fflush(stdin);
        scanf("%c",&ch);

    } while (ch == 'y' || ch =='Y');

}
void display(struct DoubleLinkedList *node)
{
    int i=1;
    printf("\n");
    printf("printing from starting of double linked list: \n");
    while(node->next!=NULL)
    {
        printf("Data at node %d is %d \n",i,node->info);
        i++;
        node = node->next;
    }
    printf("Data at node %d is %d \n",i,node->info);

    printf("\n");
    printf("printing from Last of double linked list: \n");
    while(node->prev!=NULL)
    {
        printf("Data at node %d is %d \n",i,node->info);
        i--;
        node = node->prev;
    }
    printf("Data at node %d is %d \n",i,node->info);
}
int main()
{

    struct DoubleLinkedList *start;
    start = (struct DoubleLinkedList*) malloc(1 * sizeof(struct DoubleLinkedList));
    start->prev = NULL;
    create(start);
    display(start);

    return 0;
}
