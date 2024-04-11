/*
    Write a program to define a structure for customer bank account that holds information
    like account number, name of account holder, balance, internet banking facility availed (Yes
    or No), account type (saving, recurring, deposit):
    a) Read account details for N customers.
    b) Identify the golden, silver and general customers.
    c) Golden customers: Balance > 10, 00,000. Silver Customers: Balance > 5, 00, 000 and
    < 10, 00,000. General customers: Balance <5, 00, 000.
    d) Display the list of customers availing the internet banking facility.
*/

#include <stdio.h>
#include <string.h>

// Structure to hold customer bank account details
typedef struct {
    int accountNumber;
    char accountHolderName[50];
    float balance;
    int internetBankingFacility;
    char accountType[20];
} BankAccount;

int main() {
    BankAccount customers[100];
    int numCustomers, i;
    
    printf("Enter the number of customers: ");
    scanf("%d", &numCustomers);
    
    // Read account details for N customers
    for (i = 0; i < numCustomers; i++) {
        printf("\nEnter details for Customer %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &customers[i].accountNumber);
        printf("Account Holder Name: ");
        scanf(" %[^\n]", customers[i].accountHolderName);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
        printf("Internet Banking Facility (0 for No, 1 for Yes): ");
        scanf("%d", &customers[i].internetBankingFacility);
        printf("Account Type (Saving/Recurring/Deposit): ");
        scanf(" %[^\n]", customers[i].accountType);
    }
    
    // Identify golden, silver, and general customers
    printf("\nGolden Customers (Balance > 10,00,000):\n");
    for (i = 0; i < numCustomers; i++) {
        if (customers[i].balance > 1000000)
            printf("%s\n", customers[i].accountHolderName);
    }
    
    printf("\nSilver Customers (5,00,000 < Balance < 10,00,000):\n");
    for (i = 0; i < numCustomers; i++) {
        if (customers[i].balance > 500000 && customers[i].balance <= 1000000)
            printf("%s\n", customers[i].accountHolderName);
    }
    
    printf("\nGeneral Customers (Balance < 5,00,000):\n");
    for (i = 0; i < numCustomers; i++) {
        if (customers[i].balance <= 500000)
            printf("%s\n", customers[i].accountHolderName);
    }
    
    // Display the list of customers availing the internet banking facility
    printf("\nCustomers availing the Internet Banking Facility:\n");
    for (i = 0; i < numCustomers; i++) {
        if (customers[i].internetBankingFacility)
            printf("%s\n", customers[i].accountHolderName);
    }
    
    return 0;
}