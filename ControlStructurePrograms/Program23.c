/*
    Program to print a number pattern in the form of a right-angled triangle,
    where each row contains sequential numbers starting from 1.
    Example Output for n = 5:
    
    Enter the number of lines: 5
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15 
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int i, j, n, k = 1;  // Declare variables: i and j for loops, n for number of lines, k for number counter

    // Prompt the user to enter the number of lines
    printf("Enter the number of lines: ");
    scanf("%d", &n);  // Read the number of lines (n) from the user input

    // Outer loop to control the number of rows (lines)
    for(i = 1; i <= n; i++) {
        
        // Inner loop to print numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d ", k++);  // Print the current value of k and then increment k
        }
        
        // After printing each row, print a newline character to move to the next row
        printf("\n");
    }
}