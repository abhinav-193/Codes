#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node{
    int data;
    int pos;
    struct node *next;
}node;

time_t t1;

void create(node **head, int n){
    node *tail;
    srand((unsigned)&t1);
    int *freq = calloc(101,sizeof(int));
    for(int i = 0;i<n;i++){
        int data = rand() % 101;
        while(freq[data]!=0){
            data = rand() %101;
        }
        freq[data] = 1;
        node *new = malloc(sizeof(node));
        new ->data = data;
        new ->pos = i;
        new ->next = NULL;
        if(*head == NULL){
            *head = new;
            tail = new;
        }
        else{
            tail ->next = new;
            tail = new;
        }
    }
}

void sort(node *head, int n){
    node *i,*j;
    i = head;
    while(i->next!=NULL){
        j=head;
        while(j->pos < n - i->pos - 1){
            if(j->data>j->next->data){
                int temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }
            j = j->next;
        }
        i = i->next;
    }
}

int findMiddle(node *head,int lower, int upper){
    int mid = upper + (lower - upper)/2;
    while(head->pos != mid)
        head = head ->next;
    return head->data;
}

void bSearch(node *head,int n){
    srand((unsigned)&t1);
    int key = rand()%101;
    int lower = 0,upper = n-1;
    while(lower<=upper){
        int midIndex = upper +(lower-upper)/2;
        int mid = findMiddle(head,lower,upper);
        if(mid == key){
            printf("%d present at: %d\n",key,midIndex);
            return;
        }
        else if(key>mid)
            lower = midIndex +1;
        else
            upper = midIndex - 1;
    }
    printf("%d doesn't exist in the list\n",key);
}

void display(node *head){
    while(head ->next!=NULL){
        printf("%d -> ",head->data);
        head = head ->next;
    }
    printf("%d\n",head->data);
}

int main(){
    node *head = NULL;
    int n;
    printf("Enter the number of nodes to be created: ");
    scanf("%d",&n);
    create(&head,n);
    display(head);
    sort(head,n);
    display(head);
    //printf("%d",findMiddle(head,0,7));
    bSearch(head,n);
    return 0;
}