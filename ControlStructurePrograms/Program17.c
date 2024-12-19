/*
    Program to Print a Diamond Pattern of Asterisks ('*')
    
    This program prints a diamond-shaped pattern of asterisks based on the number of lines specified by the user.
    For example, if the user inputs 5, the output will be:
        *
       **
      ***
     ****
    *****
     ****
      ***
       **
        *
*/

#include <stdio.h>  // Include the standard input/output library for printf() and scanf()

void main() {
    int i, j, n;  // Declare loop control variables 'i' (for rows), 'j' (for spaces and asterisks), and 'n' (number of lines)

    // Prompt the user to enter the number of lines for the pattern
    printf("Enter the number of lines: ");
    scanf("%d", &n);  // Read the number of lines from the user

    // First half of the diamond (upper part)
    for (i = 1; i <= n; i++) {
        
        // Print spaces before the asterisks in each row
        for (j = 1; j <= n - i; j++) {
            printf(" ");  // Print a space
        }

        // Print '*' in each row (number of asterisks equals the row number 'i')
        for (j = 1; j <= i; j++) {
            printf("*");  // Print an asterisk without a newline
        }

        printf("\n");  // Move to the next line after printing spaces and asterisks for the current row
    }

    // Second half of the diamond (lower part)
    for (i = n - 1; i >= 1; i--) {
        
        // Print spaces before the asterisks in each row
        for (j = 1; j <= n - i; j++) {
            printf(" ");  // Print a space
        }

        // Print '*' in each row (number of asterisks equals the row number 'i')
        for (j = 1; j <= i; j++) {
            printf("*");  // Print an asterisk without a newline
        }

        printf("\n");  // Move to the next line after printing spaces and asterisks for the current row
    }
}