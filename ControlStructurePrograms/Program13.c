/*
    Program to Print a Right-Angled Triangle Pattern of '1's
    This program prints a pattern where each row contains '1's in increasing order:
    Row 1: 1  
    Row 2: 11  
    Row 3: 111  
    Row 4: 1111  
    Row 5: 11111  
*/

#include <stdio.h>  // Include the standard input/output library for printf()

void main() {
    int i, j;  // Declare loop control variables 'i' (for rows) and 'j' (for columns)

    // Outer loop to control the number of rows (5 rows)
    for (i = 1; i <= 5; i++) {
        
        // Inner loop to print '1's in each row, increasing up to the current row number
        for (j = 1; j <= i; j++) {
            printf("1");  // Print '1' without a newline
        }

        printf("\n");  // After printing '1's for the current row, move to the next line
    }
}