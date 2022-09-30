#include <stdio.h>
#include <stdlib.h>
void nonzero(int **arr, int n)
{
    int non = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                non++;
            }
        }
    }
    printf("TOTAL NUMBER OF NON ZERO ELEMENTS IN THE ARRAY IS %d\n", non);
}
void sumabove(int **arr, int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("THE SUM OF ELEMENTS ABOVE THE LEADING DIAGONAL OF THE MATRIX IS %d\n",sum);
}
void sumbelow(int **arr, int n)
{
    int sum = 0;
    int f = n-2;
    for (int i = 1; i <n;i++)
    {
        for (int j = n-1; j >f;j--)
        {
            sum = sum + arr[i][j];
        }
        f--;
    }
    printf("THE SUM OF ELEMENTS BELOW THE MINOR DIAGONAL OF THE MATRIX IS %d\n", sum);
}
void product(int **arr, int n) 
{
    int k = 1;
    for (int i = 0; i < n;i++)
    {
        for (int j = i; j == i;j++)
        {
            k = k * arr[i][j];
        }
    }
    printf("THE PRODUCT OF ELEMENTS OF DIAGONAL OF THE MATRIX IS %d\n", k);
}
int main()
{
    int n, i, j;
    int **arr;
    printf("ENTER THE VALUE OF N OF THE ARRAY OF SIZE [ N X N ]\n");
    scanf("%d", &n);
    arr = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    int g = 1;
    for (i = 0; i < n; i++)
    {
    printf("ENTER %d ELEMENTS IN ROW %d\n", n,(g++));
    for (j = 0; j < n; j++)
    {
        scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("THE MATRIX YOU GAVE AS INPUT IS\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    nonzero(arr, n);
    sumabove(arr, n);
    sumbelow(arr, n);
    product(arr, n);
    return 0;
}