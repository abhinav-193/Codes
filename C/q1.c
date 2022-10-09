//Kamalika Dutta 2104025
#include<stdio.h>
#include<math.h>
int main()
{
     int n,i,l,s,a[100];
     printf("Enter the size of your array:");
     scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     l=s=a[0];
     for(i=0;i<n;i++){
        if(a[i]>l){
            l=a[i];
        }
        if(a[i]<s){
            s=a[i];
        }
     }
     printf("The smallest element is: %d\n",s);
     printf("The largest element is: %d\n",l);
     return 0;
}