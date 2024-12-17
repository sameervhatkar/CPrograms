/*  
    Write a program to calculate and print the sum of the first 'n' natural numbers using a loop.
*/

#include <stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int i, n;       // Declare 'i' for the loop counter and 'n' for the user input
    int sum = 0;    // Initialize 'sum' to 0 to store the running total of the sum

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the user input and store it in 'n'
    scanf("%d", &n);

    // Start a for loop to calculate the sum of numbers from 1 to 'n'
    for (int i = 1; i <= n; i++) {
        sum += i;   // Add the current value of 'i' to 'sum' (sum = sum + i)
    }

    // Print the calculated sum
    printf("Sum = %d", sum);
}