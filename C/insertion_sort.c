#include <stdio.h>
#include <stdlib.h>
#include <time.h>
long n = 0;
long *arr;
double clock_time, freq_time;

void random_time()
{
    printf("time required to sort random data is:\n%f frequency count and %f in cpu clock time", freq_time, clock_time);
}

void ascending_time()
{
    printf("time required to sort data already sorted in ascending order is:\n%f frequency count and %f in cpu clock time", freq_time, clock_time);
}

void descending_time()
{
    printf("time required to sort data already sorted in descending order is:\n%f frequency count and %f in cpu clock time", freq_time, clock_time);
}

long generate_random()
{
    return rand() * n;
}

void alloc()
{
    for (long i = 0; i < n; i++)
    {
        arr[i] = generate_random();
    }
}

void init()
{
    printf("enter the value of n: ");
    scanf("%ld", &n);
    arr = (long *)malloc(n * sizeof(long));
    alloc();
}

void declare()
{
    arr = (long *)malloc(n * sizeof(long));
    alloc();
}

void display()
{
    for (long i = 0; i < n; i++)
    {
        printf("%ld ", arr[i]);
    }
}

void ascending()
{
    long key;
    long i, j;
    long count1=0,count2 = 0;
    clock_t start, end;
    start = clock();
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        count1+=1;
        while (j >= 0 && arr[j] > key)
        {
            count2 += 1;
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
    end = clock();
    freq_time = count1+count2;
    clock_time =(double) end - start /(double) CLOCKS_PER_SEC;

}

void descending()
{
    long key;
    long i, j;
    long count1=0,count2 = 0;
    clock_t start, end;
    start = clock();
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        count1 += 1;
        while (j >= 0 && arr[j] < key)
        {   
            count2+=1;
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
    end = clock();
    freq_time = count1+count2;
    clock_time =(double) (end - start) /(double) CLOCKS_PER_SEC;
}

void table_representation()
{
    printf("Sl.No\tValue of n\ttime complexity for data in random\ttime complexity for data in ascending\ttime complexity for data in descending\n");
    for (int i = 1; i <= 10; i++)
    {
        n =  i*5000;
        declare(); 
        printf("%d\t%d", i, n);
        ascending();
        printf("\t%f", freq_time);
        ascending();
        printf("\t%f", freq_time);
        descending();
        ascending();
        printf("\t%f\n", freq_time);
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("-------------MENU----------\n");
        printf("0->exit\n");
        printf("1->enter n random values into an array\n");
        printf("2->display the array\n");
        printf("3->sort in ascending order\n");
        printf("4->sort in descending order\n");
        printf("5->display time complexity to sort random data\n");
        printf("6->display time complexity to sort data sorted in ascending order\n");
        printf("7->display time complexity to sort data sorted in descending order\n");
        printf("8->display in tabular format\n");
        printf("\nenter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
        case 1:
            init();
            break;
        case 2:
            display();
            break;
        case 3:
            ascending();
            break;
        case 4:
            descending();
            break;
        case 5:
            random_time();
            break;
        case 6:
            ascending_time();
            break;
        case 7:
            descending_time();
            break;
        case 8:
            table_representation();
            break;
        default:
            printf("wrong choice");
            break;
        }
    }
}