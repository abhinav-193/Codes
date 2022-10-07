#include <stdio.h>
#define SIZE 1000
int myArray[SIZE - 1];
void bubbleSort(int x[])
{
    int i, j;

    for(i = 1; i < SIZE; i++)
    {
        for( j = 0; j < SIZE - 1; j++)
        {
            if(myArray[j] > myArray[j+1])
                swapf(j, j+1);
        }
    }
}
void printSorted()
{
    int i;
    for( i = 0; i < SIZE - 1; i++)
    {
        printf("%d\n", myArray[i]);
    }
}
void swapf(int x, int y)
{
    int temp;
    temp = myArray[x];
    myArray[x] = myArray[y];
    myArray[y] = temp;

}
void init()
{
    int i;
    for( i = 0; i < SIZE - 1; i++)
    {
        myArray[i] = rand()%1000;
    }
}
int main()
{
    init();
    bubbleSort(myArray);
    printSorted();
    return 0;
}