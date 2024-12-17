/*
    Program to Calculate the Sum of an Alternating Series Using a Taylor Expansion
*/
#include<stdio.h>
#include<math.h>  // For using math functions like pow()

void main() {
    int i, fact = 1, n, sign = 1;  // Declare variables
    float x, sum = 0.0;  // Initialize sum to 0.0

    // Prompt the user for input
    printf("Enter the value of x and the value of n:");
    scanf("%f %d", &x, &n);

    // Start the series calculation loop
    for(i = 1; i <= n; i++) {
        // Calculate factorial
        fact = fact * i;

        // Calculate the term using x^i / i! and add it to the sum
        sum = sum + sign * pow(x, i) / fact;

        // Alternate the sign for the next term (this is for an alternating series)
        sign = sign * -1;
    }

    // Output the result of the series
    printf("The value of the series is %f", sum);
}