#include <stdio.h>
//This program gives you the output of the position you enter of fibonacci series.
int fib_itr(num)
{
    int a = 0;
    int b = 1;
    int i;
    int c;
    for ( i = 0; i < num - 1; i++)
    {
        c = a + b; 
        a = b;
        b = c;

        // or we can also use this logic
        // b=a+b; 1 for iteration 1
        // a=b-a; 1 for iteration 1
    }
    return a;
}
int main()
{
    int n;
    printf("Enter the index of the number in the fibonacci series:\n");
    scanf("%d", &n);
    printf("The position of element number %d in the fibonacci series is %d\n",n,fib_itr(n));
    return 0;
}
//Output:
// Enter the index of the number in the fibonacci series:
// 5
// The position of element number 5 in the fibonacci series is 3
//Program by Archit Gupta: @i-archit-gupta