/*
    Program to Print a Right-Angled Triangle Pattern of Asterisks ('*')
    This program prints a pattern where each row contains an increasing number of asterisks:
    Row 1: *  
    Row 2: **  
    Row 3: ***  
    Row 4: ****  
    Row 5: *****  
*/

#include <stdio.h>  // Include the standard input/output library for printf()

void main() {
    int i, j;  // Declare loop control variables 'i' (for rows) and 'j' (for columns)

    // Outer loop to control the number of rows (5 rows)
    for (i = 1; i <= 5; i++) {
        
        // Inner loop to print '*' in each row, increasing up to the current row number
        for (j = 1; j <= i; j++) {
            printf("*");  // Print '*' without a newline
        }

        printf("\n");  // After printing '*' for the current row, move to the next line
    }
}