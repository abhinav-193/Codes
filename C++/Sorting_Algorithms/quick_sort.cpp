#include <stdio.h>
#include <stdlib.h>

int hoare_partition(int l, int r, int a[]){
    int p = a[l];
    int i = l, j = r+1, temp;

    do{                                     // till i and j cross each other
        do{
            i++;
        }while(!(a[i] >= p) && i <= r);        // i <= r is used so that i doesn't go out of bounds

        do{
            j--;
        }while(!(a[j] <= p));

        if(i <= r){                            // swap only if i is in bounds, i may go out of bounds and cause run time error due to i++ in do while and if the if statement isn't there
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }while(!(i >= j));

    if(i <= r){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    temp = a[l];
    a[l] = a[j];
    a[j] = temp;

    return j;
}

void quick_sort(int l, int r, int a[]){
    if(l < r){
        int s = hoare_partition(l, r, a);
        quick_sort(l, s-1, a);
        quick_sort(s+1, r, a);
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

    quick_sort(0, n-1, a);

    printf("\nArray elements after sorting: ");
    for(i=0; i<n; ++i)
        printf("%d ", a[i]);
    return 0;
}
