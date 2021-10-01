#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int a[], int n){
    int i, j, v;
    for(i=1; i<n; ++i){
        v = a[i];
        j = i - 1;
        while(j>=0 && a[j]>v){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = v;
    }
}

int main()
{
    int n, i;
    printf("How many numbers do you want to enter:");
    scanf("%d", &n);

    int a[n];
    printf("\nEnter the array elements: ");
    for(i=0; i<n; ++i)
        scanf("%d", &a[i]);

    printf("\nArray before sorting: \n");
    for(i=0; i<n; ++i)
        printf("%d ", a[i]);

    insertion_sort(a, n);

    printf("\n\nArray after sorting: \n");
    for(i=0; i<n; ++i)
        printf("%d ", a[i]);

    return 0;
}
