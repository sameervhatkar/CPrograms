/*
    Program to Print a Right-Aligned Triangle Pattern of Asterisks ('*')
    This program prints a right-aligned triangle pattern of asterisks based on the number of lines specified by the user.
    For example, if the user inputs 5, the output will be:
        *
       **
      ***
     ****
    *****
*/

#include <stdio.h>  // Include the standard input/output library for printf() and scanf()

void main() {
    int i, j, n;  // Declare loop control variables 'i' (for rows), 'j' (for spaces and asterisks), and 'n' (number of lines)

    // Prompt the user to enter the number of lines for the pattern
    printf("Enter the number of lines: ");
    scanf("%d", &n);  // Read the number of lines from the user

    // Outer loop to control the number of rows (runs 'n' times)
    for (i = 1; i <= n; i++) {
        
        // Inner loop to print spaces before the asterisks in each row
        for (j = 1; j <= n - i; j++) {
            printf(" ");  // Print a space
        }

        // Inner loop to print '*' in each row (number of asterisks equals the row number 'i')
        for (j = 1; j <= i; j++) {
            printf("*");  // Print an asterisk without a newline
        }

        printf("\n");  // After printing spaces and asterisks for the current row, move to the next line
    }
}