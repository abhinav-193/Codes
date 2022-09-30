// Write a program to rearrange the elements of an array of n integers such that all even numbers are followed by all odd numbers. How many different ways you can solve this program. Write your approaches and strategy for solving this problem.
#include <stdio.h>
#include <stdlib.h>
void display(int n, int a[]) {
    printf("\nReordered array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void algo1(int n, int a[]) {
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            for (int j = i; j < n; j++)
            {
                if (a[j] % 2 == 0)
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }
            }
        }
    }

    display(n, a);
}

void algo2(int n, int arr[]) {
    int left = 0, right = n-1;
    while (left < right)
    {
        /* Increment left index while we see 0 at left */
        while (arr[left] % 2 == 0 && left < right)
            left++;
 
        /* Decrement right index while we see 1 at right */
        while (arr[right] % 2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
            /* Swap arr[left] and arr[right]*/
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    display(n, arr);
}

int main()
{
    printf("Enter n: ");
    int n;
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nAlgorithm 1: ");
    algo1(n, a);

    printf("\nAlgorithm 2: ");
    algo2(n, a);

    printf("\n");
    return 0;
}