/*
    Program to Print a Diamond Pattern with a Specified Number of Asterisks in the Upper Half.

    The user enters the number of asterisks for the widest line in the upper half of the diamond.
    The program then prints a symmetrical diamond pattern.

    Example Output for `n = 4`:

       *
      ***
     *****
    *******
     *****
      ***
       *
*/

#include <stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int i, j, n;  // Declare variables: 'i' for rows, 'j' for columns, 'n' for user input

    // Prompt the user to enter the number of asterisks in the widest line of the upper half
    printf("Enter the number of * in the upper half: ");
    scanf("%d", &n);  // Read the user input and store it in 'n'

    // First half of the diamond (upper part)
    for (i = 1; i <= n; i++) {

        // Print leading spaces to align the asterisks
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print asterisks for the current row, forming an increasing pattern of odd numbers
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    // Second half of the diamond (lower part)
    for (i = n - 1; i >= 1; i--) {

        // Print leading spaces to align the asterisks
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print asterisks for the current row, forming a decreasing pattern of odd numbers
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }
}