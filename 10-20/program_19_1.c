/*
    Write a C program to print following pattern.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    // Outer loop
    for (int i = 0; i < n; i++) {
        // Inner loop
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}