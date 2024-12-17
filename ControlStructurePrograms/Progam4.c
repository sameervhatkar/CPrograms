/*  
    Write a program to calculate and print the factorial of a given number using a loop.
*/

#include <stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int i, n;          // Declare 'i' for the loop counter and 'n' for the user input
    int fact = 1;      // Initialize 'fact' to 1 to store the factorial result

    // Prompt the user to enter a number
    printf("Enter a number: ");

    // Read the user input and store it in 'n'
    scanf("%d", &n);

    // Start a for loop to calculate the factorial of 'n'
    for (i = 1; i <= n; i++) {
        fact = fact * i;  // Multiply 'fact' by the current value of 'i'
    }

    // Print the calculated factorial
    printf("Factorial of this number is %d", fact);
}