/*
    Write a program in C to find the maximum number between two numbers using a pointer
*/

#include <stdio.h>

int main() {
   int a, b;
   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);

   int *p = &a, *q = &b;

   if (*p > *q) {
       printf("%d is greater than %d\n", *p, *q);
   } else {
       printf("%d is greater than %d\n", *q, *p);
   }

   return 0;
}