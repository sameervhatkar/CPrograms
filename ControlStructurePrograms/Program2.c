/*  
    Write a program to print the first 10 natural numbers using a loop.
*/

#include <stdio.h>  // Include the Standard Input/Output library for printf()

void main() {
    int i;  // Declare an integer variable 'i' to serve as the loop counter

    // Start a for loop that runs from i = 1 to i = 10 (inclusive)
    for (i = 1; i <= 10; i++) {
        // In each iteration, print the current value of 'i' followed by a newline
        printf("%d\n", i);
    }
}