/*
    Program to print a pyramid-like pattern of numbers in the upper half, 
    with the numbers increasing from 1 to i and then decreasing back to 1. 
    The number of rows (n) is entered by the user.

    Example Output for n = 5:

    Enter the number of * in the upper half: 5
        1
       121
      12321
     1234321
    123454321
*/

#include<stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int i, j, n;  // Declare integer variables for row counter (i), column counter (j), and number of rows (n)

    // Prompt the user to enter the number of rows of the pattern
    printf("Enter the number of lines: ");
    scanf("%d", &n);  // Read the number of rows (n) from the user

    // Loop to iterate through each row (from 1 to n)
    for(i = 1; i <= n; i++) {
        
        // Loop for printing leading spaces in each row to center-align the numbers
        for(j = 1; j <= n - i; j++) {
            printf(" ");  // Print spaces to move the numbers to the center
        }

        // Loop for printing the increasing numbers from 1 to i
        for(j = 1; j <= i; j++) {
            printf("%d", j);  // Print numbers in ascending order from 1 to i
        }

        // Loop for printing the decreasing numbers from i-1 back to 1
        for(j = i - 1; j >= 1; j--) {
            printf("%d", j);  // Print numbers in descending order from i-1 back to 1
        }

        // After printing each row, move to the next line
        printf("\n");
    }
}