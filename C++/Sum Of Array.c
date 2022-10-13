#include <stdio.h>

int main()
{

//size of array(inputed)

    int n;
    printf("Enter Size Of Array:");
    scanf("%d",&n);

//Declaring Array

    int arr[5];
    printf("Enter Array Elements: \n");

//inputting Values in Array

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;

//loop to find sum
    for (int i = 0; i < n; i++)
    {
        sum = sum+ arr[i];
    }
// print sum   
   printf("Sum Of Array is : %d",sum);

   return 0;
    
}