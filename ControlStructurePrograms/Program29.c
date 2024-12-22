/*
    Program to calculate the number of digits in a given number.
    The program takes an integer input `n` from the user and counts how many digits it contains.

    Example Output for n = 12345:

    Enter the number: 12345
    Number of digits = 5
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int n, count = 0;  // Declare variables: n for the number, count for counting digits

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &n);  // Read the number from the user input

    // Use a while loop to count the digits in the number
    while(n != 0) {
        n = n / 10;   // Remove the last digit by performing integer division by 10
        count++;      // Increment the count for each digit removed
    }

    // Print the result: the total number of digits
    printf("Number of digits = %d", count);
}