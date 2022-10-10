#include<stdio.h>
#include<stdlib.h>
struct poly
{
    int degree;
    int coeff;
};
void pro(int n1, int n2, struct poly poly1[10], struct poly poly2[10])
{
    int c = -1;
    struct poly product[100];
    for(int i = 0 ; i < n1 ; i++)
    {
        for (int j=0;j< n2 ;j++)
        {
            product[++c].degree=poly1[i].degree+poly2[j].degree;
            product[c].coeff=poly1[i].coeff*poly2[j].coeff;
        }
    }
    printf("\nThe Product Of Two Polynomials Is: \n");
    for(int i = 0 ; i <= c ; i++)
    {
        if(product[i].degree==0){printf("%d ",product[i].coeff);}
        else if(product[i].degree==1){printf("%dx ",product[i].coeff);}
        else{printf("%dx^%d ",product[i].coeff,product[i].degree);}
        if(i!=c){printf("+ ");}
    }
}
int main()
{
    struct poly poly1[10],poly2[10],product[100];
    int n1,n2,count=-1;
    int i,j;
    printf("\nEnter Number Of Terms Of 1st Polynomial: ");
    scanf("%d",&n1);
    for(i = 0 ; i < n1 ; i++)
    {
        printf("\nEnter Degree: ");
        scanf("%d",&poly1[i].degree);
        printf("\nEnter Coefficient: ");
        scanf("%d",&poly1[i].coeff);
    }
    printf("\nEnter Number Of Terms Of 2nd Polynomial: ");
    scanf("%d",&n2);
    for(i = 0 ; i < n2 ; i++)
    {
        printf("\nEnter Degree: ");
        scanf("%d",&poly2[i].degree);
        printf("\nEnter Coefficient: ");
        scanf("%d",&poly2[i].coeff);
    }
    pro(n1,n2,poly1,poly2);
}