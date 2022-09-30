#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void bubbleSort(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            count += 1;
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
    printf("time by frequency count=%d\n", count);
}
void optimized_bubbleSort(int arr[], int n)
{
    int count = 0;
    int flag = 0; 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            count += 1;
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
                flag = 1;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    printf("time by frequency count=%d\n", count);
}

int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ch;
    printf("enter 1 for bubble sort and 2 for optimized bubble sort");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        bubbleSort(arr, n);
        break;
    case 2:
        optimized_bubbleSort(arr, n);
        break;
    default:
        printf("wrong choice");
    }
    return 0;
}