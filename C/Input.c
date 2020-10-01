#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int number;
    printf("Please enter a number:\n");
    scanf("%d",&number);
    /*
        For single statements we can skip the curly brackets
    */
    if(number < 100)
        printf("Number is less than 100!\n");
    else if(number == 100)
        printf("Number is 100!\n");
    else
        printf("Number is greater than 100!\n");

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    
    return 0;
}