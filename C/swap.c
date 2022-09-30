// Write a program to swap pair of elements of an array of n integers from starting. If n is odd, then last number will be remain unchanged.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n - 1; i += 2)
    {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
    printf("\nArray after swapping: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}