/*
    Write a program that uses functions to perform the following operations:
    a) Reading a complex Number
    b) Writing a complex number
    c) Addition of two complex numbers
    d) Multiplication of two complex numbers
*/

#include <stdio.h>
#include <complex.h>

// Function to read a complex number from the user
double complex read_complex_number() {
    double real, imag;
    printf("Enter the real part: ");
    scanf("%lf", &real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &imag);
    return real + imag * I;
};

// Function to print a complex number
void print_complex_number(double complex num) {
    printf("%.2f + %.2fi\n", creal(num), cimag(num));
}

// Function to add two complex numbers
double complex add_complex_numbers(double complex num1, double complex num2) {
    return num1 + num2;
}

// Function to multiply two complex numbers
double complex multiply_complex_numbers(double complex num1, double complex num2) {
    return num1 * num2;
}

int main() {
    double complex num1, num2, result;

    printf("Enter the first complex number:\n");
    num1 = read_complex_number();

    printf("Enter the second complex number:\n");
    num2 = read_complex_number();

    printf("\nAddition:\n");
    result = add_complex_numbers(num1, num2);
    print_complex_number(result);

    printf("\nMultiplication:\n");
    result = multiply_complex_numbers(num1, num2);
    print_complex_number(result);

    return 0;
}