////WAP TO FIND OUT THE BEST/WORST/AVERAGE CASE TIME COMPLEXITY FOR MERGE SORT
#include<stdio.h>
int merge(int a[], int beg, int mid, int end)
{
    int i, j, k,count;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[n1], RightArray[n2];


    for (int i = 0; i < n1; i++)
    {
        LeftArray[i] = a[beg + i];
        count=count+1;
    }
    for (int j = 0; j < n2; j++)
    {
        RightArray[j] = a[mid + 1 + j];
        count=count+1;
    }
    i = 0;
    j = 0;
    k = beg;

    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            a[k] = LeftArray[i];
            i++;
        }
        else
        {
            a[k] = RightArray[j];
            j++;
        }
        k++;
        count=count+1;
    }
    while (i < n1)
    {
        a[k] = LeftArray[i];
        i++;
        k++;
        count=count+1;
    }

    while (j < n2)
    {
        a[k] = RightArray[j];
        j++;
        k++;
        count=count+1;
    }
    return count;
}

int mergeSort(int a[], int beg, int end)
{
    int d=0;
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        d=merge(a, beg, mid, end);
    }
    return d;
}
void printsortedarray(int A[],int n)
{
    int i;
    printf("\nTHE ARRAY IS : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int n,i,d=0;
    printf("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nENTER THE ELEMENTS \n");
    for(i=0;i<n;i++)
    {
       printf("ENTER ELEMENT %d : ",(i+1));
       scanf("%d",&arr[i]);
    }
    d=mergeSort(arr,0,n-1);
    printsortedarray(arr,n);
    printf("\nTHE TIME REQUIRED FOR THE MERGE SORT IS : %d",d);
    return 0;
}
