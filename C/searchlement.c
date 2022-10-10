//Q.2 WAP to search an element in array of n numbers.

#include <stdio.h>
int search(int *a, int n, int key)
{
int i;
for (i = 0; i < n; i++)
{
if (a[i] == key)
{
return 1;
}
}
return 0;
}
int main()
{
int a[10000], i, n, key;
printf("Enter size of the array : ");
scanf("%d", &n);
printf("Enter elements in array : ");
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf("Enter the key : ");
scanf("%d", &key);
if (search(a, n, key))
printf("element found ");
else
printf("element not found ");
}