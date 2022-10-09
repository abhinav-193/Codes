#include<stdio.h> 
int linearsearch(int arr[], int size, int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    } 
    return -1;
} 
int binarysearch(int arr[], int size, int element)
{
    int low, mid, high; 
    low = 0;
    high =size-1;
    while(low<=high)
    {
        mid = (low + high)/2; 
        if(arr[mid]==element)
        {
            return mid;
        } 
        if(arr[mid]<element)
        {
            low = mid + 1;
        } 
        else{
            high = mid - 1;
        } 
    } 
    return -1;
}
int main()
{
    int n;
    printf("Enter the size of array"); 
    scanf("%d",&n); 
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d; 
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
            }
        }
    } 
    printf("Sorted array");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&d);
    int searchindex = binarysearch(a,n,d);
    printf("The element %d was found at index %d\n",d,searchindex);
}