/*
    Write a program to swap values of two elements. 
    Use function and pass argument using call by Value and call by reference.
*/

#include <stdio.h>

// Function to swap values using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue() function: a = %d, b = %d\n", a, b);
}

// Function to swap values using call by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call by value
    swapByValue(x, y);
    printf("After swapByValue(): x = %d, y = %d\n", x, y);

    // Call by reference
    swapByReference(&x, &y);
    printf("After swapByReference(): x = %d, y = %d\n", x, y);

    return 0;
}