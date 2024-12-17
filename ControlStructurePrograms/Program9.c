/*  
    Write a program to calculate the sum of the series 1/1! + 1/2! + 1/3! + ... + 1/n! for a given 'n'.
*/

#include <stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int i, n, fact = 1;  // Declare integer variables 'i' for the loop counter, 'n' for the number of terms, and 'fact' to store the factorial
    float sum = 0.0;  // Declare 'sum' as a float to store the sum of the series, initialized to 0.0

    // Prompt the user to enter a number 'n' (number of terms in the series)
    printf("Enter a number: ");
    
    // Read the user input and store it in 'n'
    scanf("%d", &n);

    // Start a for loop to calculate the sum of the series
    for (i = 1; i <= n; i++) {
        fact = fact * i;  // Calculate the factorial of 'i' and store it in 'fact'
        sum = sum + 1.0 / fact;  // Add the reciprocal of 'fact' to 'sum'
    }

    // Print the final value of the series
    printf("The value of the series is: %f", sum);
}