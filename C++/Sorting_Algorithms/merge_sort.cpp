#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int p, int q, int b[], int c[], int a[]){
    int i=0, j=0, k=0;
    while(i < p && j < q){
        if(b[i] <= c[j]){
            a[k] = b[i];
            i++;
        }
        else{
            a[k] = c[j];
            j++;
        }
        k++;
    }

    if(i == p){
        for(i=j; i<q; ++i){
            a[k] = c[i];
            k++;
        }
    }
    else{
        for(; i<p; ++i){
            a[k] = b[i];
            k++;
        }
    }
}

void merge_sort(int n, int a[]){
    if(n > 1){
        int p = n/2;
        int q = n - p;
        int b[p], c[q], i, j;


        for(i=0; i<p; ++i)
            b[i] = a[i];
        for(i=0, j=p; j<n; ++i, ++j)
            c[i] = a[j];

        merge_sort(p, b);
        merge_sort(q, c);
        merge(p, q, b, c, a);
    }
}

int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    printf("\nEnter the array elements: ");
    for(i=0; i<n; ++i)
        scanf("%d", &a[i]);

    printf("\nArray elements before sorting: ");
    for(i=0; i<n; ++i)
        printf("%d ", a[i]);

    merge_sort(n, a);

    printf("\nArray elements after sorting: ");
    for(i=0; i<n; ++i)
        printf("%d ", a[i]);

    return 0;
}
