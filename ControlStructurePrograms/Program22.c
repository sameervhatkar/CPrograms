/*
    Program to print a pyramid-like pattern with alphabets in the upper half.
    The number of lines (n) for the upper half of the pyramid is provided by the user.
    Example Output for n = 5:
    
    Enter the number of * in the upper half: 5
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int i, j, n;  // Declare integer variables: i and j for loops, n for number of lines

    // Prompt the user to enter the number of lines of the pyramid
    printf("Enter the number iof lines: ");
    scanf("%d", &n);  // Read the value of n (number of rows)

    // Outer loop to handle each row of the pyramid
    for(i = 1; i <= n; i++) {
        
        // Inner loop for printing spaces before the alphabets
        for(j = 1; j <= n - i; j++) {
            printf(" ");  // Print spaces to align the pyramid
        }

        // Inner loop for printing the increasing alphabets from A to the current letter
        for(j = 1; j <= i; j++) {
            // Print the character corresponding to the current number (A = 65 in ASCII)
            printf("%c", (char)(j + 64));  // 65 is the ASCII value of 'A', so we add 64 to get the correct character
        }

        // Inner loop for printing the decreasing alphabets after the middle character
        for(j = i - 1; j >= 1; j--) {
            // Print the character corresponding to the current number
            printf("%c", (char)(j + 64));  // Same logic as above for decreasing characters
        }

        // Print a new line after each row
        printf("\n");
    }
}