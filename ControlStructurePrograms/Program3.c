/*  
    Write a program to print the first 'n' natural numbers using a loop.
*/

#include <stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int i, n;  // Declare 'i' as the loop counter and 'n' to store the user input

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the user input and store it in 'n'
    scanf("%d", &n);

    // Start a for loop that runs from i = 1 to i = n (inclusive)
    for (i = 1; i <= n; i++) {
        // In each iteration, print the current value of 'i' followed by a newline
        printf("%d\n", i);
    }
}