/*  
    Write a program to print the word "Computer" 5 times using a loop.
*/

#include <stdio.h>  // Include the Standard Input/Output library for printf()

void main() {
    int i;  // Declare an integer variable 'i' to serve as the loop counter

    // Start a for loop that runs from i = 1 to i = 5 (inclusive)
    for (i = 1; i <= 5; i++) {
        // In each iteration, print the word "Computer" followed by a newline
        printf("Computer\n");
    }
}