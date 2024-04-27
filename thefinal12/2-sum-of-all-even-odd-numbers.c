/*
    Write a C program to store N numbers in an array and compute 
    the sum of all even and odd numbers in an array.
*/

#include <stdio.h>

#define MAX_SIZE 100 

int main() {
    int arr[MAX_SIZE], n, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n); 
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check if the number is even or odd and update the respective sum
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    printf("\nSum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}