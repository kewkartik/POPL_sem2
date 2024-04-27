/*
    Write C program to find factorial of a number using recursion.
*/

#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n == 0) {
        // Base case: factorial of 0 is 1
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        long long fact = factorial(num);
        printf("The factorial of %d is %lld\n", num, fact);
    }

    return 0;
}