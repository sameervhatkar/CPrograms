/*
    Program to calculate the sum and product of the digits of a given number.
    The program takes an integer input `n` from the user and computes:
    - The sum of all its digits.
    - The product of all its digits.
    
    Example Output for n = 123:
    
    Enter the number: 123
    Sum = 6
    Product = 6
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int n, digit, sum = 0, product = 1;  // Declare variables

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &n);  // Read the number from user input

    // Use a while loop to process each digit of the number
    while(n != 0) {
        digit = n % 10;       // Extract the last digit of the number
        sum = sum + digit;    // Add the digit to the sum
        product = product * digit;  // Multiply the digit into the product
        n = n / 10;           // Remove the last digit by dividing the number by 10
    }

    // Print the results
    printf("Sum = %d\nProduct = %d\n", sum, product);
}