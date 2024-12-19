/*
    Program to print a right-angled triangle pattern with numbers in each row.
    The user enters the number of lines (n), and the program prints a right-angled triangle 
    where each row contains numbers from 1 to the row number.

    Example Output for n = 5:

    1
    12
    123
    1234
    12345
*/

#include<stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int i, j, n;  // Declare variables 'i' for row iteration, 'j' for column iteration, 'n' for user input

    // Prompt the user for the number of lines
    printf("Enter the number of lines: ");
    scanf("%d", &n);  // Read the number of lines (n) from the user

    // Loop to iterate through each row (1 to n)
    for(i = 1; i <= n; i++) {
        
        // Inner loop to print numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d", j);  // Print the current value of 'j' (numbers starting from 1 in each row)
        }

        // After each row, print a newline to move to the next row
        printf("\n");
    }
}