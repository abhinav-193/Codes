/* C implementation of LIS problem */
#include <stdio.h>

/* lis prints the length and the longest
  increasing subsequence in arr[] of size n */
void lis_and_print(int arr[], int n)
{
    int lis[n];

    lis[0] = 1;

    /* Compute optimized LIS values in
       bottom up manner */
    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }

    // maximum value in lis
    int length = 0;

    for (int i = 0; i < n; i++)
        if (lis[i] > length)
            length = lis[i];

    printf("Length of LIS is  %d\n", length);

    // Prints Longest increasing subsequence in arr[]

    printf("LIS is ");

    int tem_length = length;
    int longest_inc_sub[tem_length];
    int ptr = tem_length - 1;

    for (int i = n - 1; i >= 0; i--)
        if (lis[i] == tem_length)
            longest_inc_sub[--tem_length] = arr[i];

    for (int i = 0; i < length; i++)
        printf("%d ", longest_inc_sub[i]);
    printf("\n");
}

/* Driver program to test above function */
int main()
{
    int arr[] = {20, 32, 19, 43, 31, 60, 51, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    lis_and_print(arr, n);
    return 0;
}