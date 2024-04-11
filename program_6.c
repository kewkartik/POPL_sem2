/*
    Write a program generate Fibonacci series with and without using recursive function.
*/

#include <stdio.h>

int main() {
    int n, i, prev1 = 0, prev2 = 1, curr;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", prev1);
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    return 0;
}