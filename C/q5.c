//Kamalika Dutta 2104025
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int *p,n,a,b,i,c=0,d=2;
    printf("Enter the size of you dynamic array:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    printf("\nEnter the lower limit and the upper limit:");
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++){
        if(a==*(p+i) || b==*(p+i)){
        c++;
        d=0;}
        if(*(p+i)>a && *(p+i)<b){
            c++;
        }
    }
    printf("\nThe numbers both inclusive are: %d",c+d);
     return 0;
}