/*  
    Write a program to print all odd numbers from 1 to 'n' using a loop.
*/

#include <stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int i, n;  // Declare 'i' for the loop counter and 'n' for the user input

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the user input and store it in 'n'
    scanf("%d", &n);

    // Start a for loop to print all odd numbers from 1 to 'n'
    for (int i = 1; i <= n; i += 2) {
        // In each iteration, print the current value of 'i' followed by a newline
        printf("%d\n", i);
    }
}