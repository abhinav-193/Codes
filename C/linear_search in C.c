#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[100];
    int a;
    int b;
    int search;

    printf ("Enter the array size:\n");
    scanf ("%d", &a);
    num[a];

    printf ("Enter the array elements:\n");
    while (b < a){
        scanf ("%d", &num[b]);
        b++;
    }

    printf ("Enter the number you want to search:\n");
    scanf ("%d", &search);

    b = 0;

    while (b < a){
        if (num[b] == search){
            printf ("%d is located in %d", search, b+1);
            break;
        }
        b++;
    }
    if (search != num[b]){
        printf ("%d is not located in the array", search);
    }
