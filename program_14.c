/* Write C program to perform following matrix operations:
    1. Read two matrices from user
    2. Display two matrices
    3. Find sum of two matrices
*/
#include <stdio.h>

int main() {
    int a, b, c, d;

    // Input of rows and columns of two matrices
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &a, &b);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &c, &d);

    int arr1[a][b], arr2[c][d], arr3[a][b];

    // Input of elements of matrix 1
    printf("Enter elements of first matrix: \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input of elements of matrix 2
    printf("Enter elements of second matrix: \n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Display matrix 1
    printf("First matrix: \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    // Display matrix 2
    printf("Second matrix: \n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    // Addition of two matrices
    if (a == c && b == d) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        // Displaying addition of two matrices
        printf("Addition of two matrices: \n");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
    } else {
        // If addition is not possible
        printf("Addition is not possible \n");
    }

    return 0;
}