/*
    Write a Java program using a class and write constructor to initialize two numbers.
    Include member functions to perform the following tasks:
    1. To display two numbers.
    2. To add two numbers.
    3. Subtract one number from other.
*/

class ArithmeticOperations {
    private int num1, num2;

    // Constructor to initialize two numbers
    ArithmeticOperations(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    // Function to display two numbers
    void displayNumbers() {
        System.out.println("First Number: " + num1);
        System.out.println("Second Number: " + num2);
    }

    // Function to add two numbers
    int addNumbers() {
        return num1 + num2;
    }

    // Function to subtract one number from the other
    int subtractNumbers() {
        return num1 - num2;
    }
}

public class program_11 {
    public static void main(String[] args) {
        // Creating an object of ArithmeticOperations class
        ArithmeticOperations obj = new ArithmeticOperations(10, 5);

        // Displaying two numbers
        obj.displayNumbers();

        // Adding two numbers
        int sum = obj.addNumbers();
        System.out.println("Sum of two numbers: " + sum);

        // Subtracting one number from the other
        int difference = obj.subtractNumbers();
        System.out.println("Difference of two numbers: " + difference);
    }
}