/*
    Write a program to calculate the salary of an employee given his basic pay (take input
    from user). Calculate gross salary of employee. Let HRA be 10% of basic pay and TA be 5% of
    basic pay. Let an employee pay professional tax as 2% of total salary. Calculate net salary
    payable after Deduction.
*/

#include <stdio.h>

int main() {
    float basicPay, grossSalary, hra, ta, professionalTax, netSalary;

    // Take input from the user for basic pay
    printf("Enter the basic pay of the employee: ");
    scanf("%f", &basicPay);

    // Calculate HRA (10% of basic pay)
    hra = 0.1 * basicPay;

    // Calculate TA (5% of basic pay)
    ta = 0.05 * basicPay;

    // Calculate gross salary
    grossSalary = basicPay + hra + ta;

    // Calculate professional tax (2% of gross salary)
    professionalTax = 0.02 * grossSalary;

    // Calculate net salary
    netSalary = grossSalary - professionalTax;

    // Display the result
    printf("\nGross Salary: %.2f", grossSalary);
    printf("\nProfessional Tax: %.2f", professionalTax);
    printf("\nNet Salary: %.2f\n", netSalary);

    return 0;
}