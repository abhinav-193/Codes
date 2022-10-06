// WAP to implement Bubble Sort. Take 3 different set of input. For each of the case count the number of comparison to reach final array.
#include<stdio.h>

void sort(int a[], int n){
    int ctr = 0;
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0;j < i; j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            ctr++;
        }
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf(" %d ", a[i]);
    }
    printf("\nNumber of steps: %d\n", ctr);
}

int main()
{
    int inp1[]={2,7,7,9,16,10,1};
    int inp2[]={5,6,7,8,9,10};
    int inp3[]={10,9,8,7,6,5};
    
    sort(inp1, 7);
    sort(inp2, 6);
    sort(inp3, 6);
    
    return 0;
}
