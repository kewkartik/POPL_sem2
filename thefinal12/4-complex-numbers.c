/*
    Write a program that uses functions to perform the following operations:
    a) Reading a complex Number
    b) Writing a complex number
    c) Addition of two complex numbers
    d) Multiplication of two complex numbers
*/

#include <stdio.h>

typedef struct complex complex;
// Define a structure for complex number
struct complex
{
    int real;
    int img;
};

complex add(complex a, complex b)
{
    struct complex sum;
    sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    return sum;
}

complex print(complex a, char name[20])
{
    printf("%s = %d + %di \n", name, a.real, a.img);
    return a;
};

complex multiply(complex a, complex b)
{
    complex mul;
    mul.real = a.real * b.real - a.img * b.img;
    mul.img = a.real * b.img + a.img * b.real;
    return mul;
}

complex input(complex a)
{
    printf("Enter the real part : \n");
    scanf("%d", &a.real);
    printf("Enter the imaginary part : \n");
    scanf("%d", &a.img);
    return a;
}

int main()
{
    complex a, b, sum, mul;
    printf("Enter the real and imaginary part of first complex number: \n");
    a = input(a); // Input First complex number
    printf("Enter the real and imaginary part of second complex number: \n");
    b = input(b); // Input second complex number

    print(a, "a"); // Print first complex number
    print(b, "b"); // Print second complex number

    int choice;
    printf("Enter 1 for addition and 2 for multiplication: \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        sum = add(a, b);
        print(sum, "sum");
        break;
    case 2:
        mul = multiply(a, b);
        print(mul, "mul");
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}
