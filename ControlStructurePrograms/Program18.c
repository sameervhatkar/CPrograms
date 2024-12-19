/*
    Program to Print a Diamond Pattern with a Specified Number of Asterisks ('*') in the Center Line.

    The program prompts the user to enter the number of asterisks for the center line and prints a diamond pattern accordingly.
    For example, if the user inputs 5, the output will be:

        * 
       * * 
      * * * 
     * * * * 
    * * * * * 
     * * * * 
      * * * 
       * * 
        * 
*/

#include <stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int i, j, n;  // Declare loop control variables 'i' (for rows), 'j' (for spaces and asterisks), and 'n' (number of asterisks in the center line)

    // Prompt the user to enter the number of asterisks for the center line
    printf("Enter the number of * in the centre line: ");
    scanf("%d", &n);  // Read the user input and store it in 'n'

    // First half of the diamond (upper part including the center line)
    for (i = 1; i <= n; i++) {

        // Print leading spaces to align the asterisks in each row
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print asterisks with a space between them
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");  // Move to the next line after printing spaces and asterisks for the current row
    }

    // Second half of the diamond (lower part)
    for (i = n - 1; i >= 1; i--) {

        // Print leading spaces to align the asterisks in each row
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print asterisks with a space between them
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");  // Move to the next line after printing spaces and asterisks for the current row
    }
}