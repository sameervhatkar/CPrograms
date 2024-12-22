/*
    Program to reverse a given integer number.
    The program reads a number from the user, reverses its digits, and then prints the reversed number.
    
    Example Output for n = 12345:
    
    Enter a number: 12345
    The reverse number is 54321
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int n, reverse = 0, digit;  // Declare variables: n for input number, reverse for storing reversed number, digit to store each extracted digit

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);  // Read the input number from the user

    // Loop to reverse the digits of the number
    while(n != 0) {
        digit = n % 10;        // Extract the last digit of the number (n % 10)
        n = n / 10;            // Remove the last digit from the number (integer division by 10)
        reverse = reverse * 10 + digit;  // Shift the digits of 'reverse' and add the extracted digit
    }

    // Print the reversed number
    printf("The reverse number is %d", reverse);
}