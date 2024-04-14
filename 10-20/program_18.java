/*
    Write a Java program using a to print reverse of a Number.
*/

import java.util.Scanner;

public class program_18 {
   public static void main(String[] args) {
       Scanner scanner = new Scanner(System.in);
       System.out.print("Enter a number: ");
       int num = scanner.nextInt();
       int reversedNum = reverseNumber(num);
       System.out.println("The reverse of " + num + " is " + reversedNum);
   }

   public static int reverseNumber(int num) {
       int reversed = 0;
       while (num != 0) {
           int digit = num % 10;
           reversed = reversed * 10 + digit;
           num /= 10;
       }
       return reversed;
   }
}