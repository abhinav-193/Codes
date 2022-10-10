#include <stdio.h>
int maximum_value(int a[], int l)
{
    int i, v, j, mv;
    mv = 0;
    for(i=0;i<(l-1);i++)
    {
        v = a[i];
        for(j=(i+1);j<l;j++)
        {
            v = v + a[j];
            if(v>mv)
            {
                mv = v;
            }
        }
    }
    if(mv<0)
    {
        mv = 0;
    }
    return (mv);
}
int main()
{
    int l, i;
    printf("Enter the legth of the list:\n");
    scanf("%d", &l);
    int a[l];
    printf("Enter the numbers in the list:\n");
    for(i=0;i<l;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Maximum value that you can get out of the entered list of numbers is (%d).", maximum_value(a, l));
}