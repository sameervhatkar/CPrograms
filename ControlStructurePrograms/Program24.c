/*
    Program to print a pattern where each line contains increasing letters of the alphabet.
    The first line starts with 'A' and subsequent rows print increasing letters sequentially.
    
    Example Output for n = 5:
    
    Enter the number of lines: 5
    A 
    B C 
    D E F 
    G H I J 
    K L M N O 
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int i, j, n, k = 1;  // Declare variables: i and j for loops, n for number of lines, k for letter counter

    // Prompt the user to enter the number of lines
    printf("Enter the number of lines: ");
    scanf("%d", &n);  // Read the number of lines (n) from the user input

    // Outer loop to control the number of rows (lines)
    for(i = 1; i <= n; i++) {
        
        // Inner loop to print the letters in each row
        for(j = 1; j <= i; j++) {
            // Print the letter corresponding to ASCII value 64 + k (ASCII value of 'A' is 65)
            printf("%c ", 64 + k++);
        }
        
        // After printing each row, print a newline character to move to the next row
        printf("\n");
    }
}