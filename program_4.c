/*
Write a program to accept n number of element from user (where, n is specified by user)
and stores data in an array and display the largest element of that array using loops.
*/

#include <stdio.h>

int main() {
    int n, i;
    float arr[100]; // Assuming a maximum array size of 100
    float largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    largest = arr[0]; // Assume the first element as the largest initially

    // Find the largest element in the array
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element is: %.2f\n", largest);

    return 0;
}