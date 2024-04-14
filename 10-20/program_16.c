/* Write a C program to perform following operations:
   1. Length of the String
   2. Reverse of the String
   3. Concatenation of two Strings
   4. Copying one string to another
*/

#include <stdio.h>
#include <string.h>

// Reverse the string
void reverse(char *str) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char a[20], b[20], ans[50];
    int i, cmp;

    printf("Enter the operation: \n");
    printf("1) string length \n2) string reverse \n3) string concatenation \n4) string copy \n5) exit \n");
    scanf("%d", &i);

    printf("enter string 1: \n");
    scanf("%s", a);

    printf("enter string 2: \n");
    scanf("%s", b);

    switch (i) {
        case 1:
            printf("Length of string a is %lu\n", strlen(a));
            printf("Length of string b is %lu\n", strlen(b));
            break;
        case 2:
            reverse(a);
            reverse(b);
            printf("reverse of string a is %s\n", a);
            printf("reverse of string b is %s\n", b);
            break;
        case 3:
            strcat(a, b);
            printf("concatenated string is %s\n", a);
            break;
        case 4:
            strcpy(a, b);
            printf("a: %s \nb: %s \n", a, b);
            printf("string copy successful\n");
            break;
        case 5:
            return 0;
        case 6:
            printf("invalid input\n");
    }
}