// Write a program to test whether a number n, entered through keyboard is prime or  not by using different algorithms you know for at least 10 inputs and note down the time  complexity by step/frequency count method for each algorithm & for each input. Finally make a comparison of time complexities found for different inputs, plot an appropriate graph & decide which algorithm is faster. 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int steps;

int algo1(int n) {
    // 1 to n
    steps = 1;
    int i, j, flag = 0;
    for (i = 2; i <= n; ++i) {
        steps+=2;
        if (n % i == 0) {
            steps++;
            flag++;
            break;
        }
    }
    steps+=2;
    if(flag == 1)
        return 1;
    else {
        steps++;
        return 0;
    }
}

int algo2(int n) {
    // 2 to n/2
    if (n == 1){
        steps=2;
        return 0;
    }
    steps = 1;
    for (int i = 2; i <= n / 2; i++) {
        steps+=2;
        if (n % i == 0) {
            steps+=2; 
            return 0;
        }
    }
    steps++;
    return 1;
}

int algo3(int n) {
    // 2 to sqrt(n)
    if (n == 1){
        steps=2;
        return 0;
    }
    steps = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        steps+=2;
        if (n % i == 0) {
            steps+=2; 
            return 0;
        }
    }
    steps++;
    return 1;
}

int main()
{
    int n;
    while(1) {
        printf("\nEnter a number (0 to quit): ");
        scanf("%d", &n);
        if(n == 0)
            return 0;
        int algo;
        printf("Enter algo number (1, 2, 3): ");
        scanf("%d", &algo);
        int isPrime;
        switch (algo)
        {
        case 1:
            isPrime = algo1(n);
            break;
        case 2:
            isPrime = algo2(n);
            break;
        case 3:
            isPrime = algo3(n);
            break;
        default:
            printf("Invalid algo number");
            break;
        }
        
        if(isPrime)
            printf("%d is a prime number\n", n);
        else
            printf("%d is not a prime number\n", n);    
        printf("Steps: %d\n", steps);
    }

    return 0;
}