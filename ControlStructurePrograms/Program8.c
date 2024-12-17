/*  
    Write a program to calculate the sum of the harmonic series up to 'n' terms.
*/

#include <stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int i, n;         // Declare 'i' for the loop counter and 'n' for the number of terms
    float sum = 0.0;  // Initialize 'sum' to 0.0 to store the running total of the harmonic series

    // Prompt the user to enter the number of terms
    printf("Enter a number: ");
    
    // Read the user input and store it in 'n'
    scanf("%d", &n);

    // Start a for loop to calculate the sum of the harmonic series up to 'n' terms
    for (int i = 1; i <= n; i++) {
        sum = sum + 1.0 / i;  // Add the reciprocal of 'i' (1/i) to 'sum'
    }

    // Print the final value of the harmonic series
    printf("The value of the series is: %f", sum);
}