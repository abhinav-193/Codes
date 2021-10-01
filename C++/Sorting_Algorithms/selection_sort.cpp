#include <stdio.h>
#include <stdlib.h>

void selection_sort(int a[], int n){
    int i, j, min=0, temp;
    for(i=0; i<n-1; ++i){
        min = i;
        for(j=i+1; j<n; ++j)
            if(a[j] < a[min])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main()
{
    int n, i;
    printf("How many values do you want to enter: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\nArray before sorting: ");
    for(i=0; i<n; ++i){
        printf("%d ", a[i]);
    }

    selection_sort(a, n);

    printf("\nArray after sorting: ");
    for(i=0; i<n; ++i){
        printf("%d ", a[i]);
    }

    return 0;
}
