//including the libraries to be used
#include <stdio.h>
#include<stdlib.h>

//defining the main function
int main() {
	//declaring the variables
    int number, i, flag = 0;
    
    //for taking the user input
    printf("Enter any integer: ");
    scanf("%d", &number);

    //condition for checking if input is prime or not
    for (i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
        	//input is a composite number
            flag = 1;
            break;
        }
    }

    //condition for checking if input is 1 or another number
    if (number == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
    	//displaying the output
        if (flag == 0)
            printf("%d is a prime number.", number);
        else
            printf("%d is a composite number.", number);
    }

    return 0;
}
