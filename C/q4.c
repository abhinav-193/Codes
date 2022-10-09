//Kamalika Dutta 2104025
#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *a,n,i,j,t;
      printf("How many numbers you want to be sorted: ");
      scanf("%d",&n);
      a=(int *)malloc(n *sizeof(int));
      printf("\nEnter %d Numbers: \n\n",n);
      for(i=0;i<=n-1;i++)
      {
            scanf("%d", (a+i));
      }
      for(i=0;i<n;i++)
      {
            for(j=0;j<=i;j++)
            {
                  if(*(a+i)<*(a+j))
                  {
                        t=*(a+i);
                        *(a+i)=*(a+j);
                        *(a+j)=t;
                  }
            }
      }
      printf("\nAfter Sorting in Ascending Order: \n");
      for(i=0;i<n;i++)
      printf("\n%d",*(a+i));
      return 0;
}