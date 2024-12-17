/*  
    Write a program to calculate the sine of an angle in degrees using its Taylor series expansion.
    The program calculates the sine of an angle by using the series expansion up to 'n' terms.
    The series for sine(x) is:
    sine(x) = x - (x^3 / 3!) + (x^5 / 5!) - (x^7 / 7!) + ...
*/

#include <stdio.h>  // Include standard input/output functions
#include <math.h>   // Include math functions, such as pow()

void main() {
    int i, fact = 1, n, sign = -1;  // Declare variables 'i', 'fact', 'n', and 'sign'
    float x, numerator, sum, term;  // Declare float variables 'x', 'numerator', 'sum', and 'term'
    
    // Prompt the user to enter an angle in degrees and the number of terms 'n' for the series
    printf("Enter an angle in degrees and the value of n:");
    scanf("%f %d", &x, &n);  // Take input for angle 'x' (in degrees) and the number of terms 'n'

    // Convert the angle from degrees to radians
    x = x * 3.14 / 180;

    // Initialize the first term of the series (x^1 / 1!) and the sum as this term
    term = x;  
    sum = term;

    // Start a for loop to calculate the sine series
    for(i = 3; i <= n; i += 2) {
        // Calculate factorial for the current term (i-1) and i
        fact = fact * i * (i - 1);

        // Calculate the power of 'x' raised to the current value of 'i'
        numerator = pow(x, i);

        // Calculate the current term of the series (numerator / factorial)
        term = numerator / fact;

        // Add or subtract the current term from the sum based on the 'sign'
        sum = sum + sign * term;

        // Flip the sign for the next term (alternating + and -)
        sign = sign * -1;
    }

    // Print the calculated value of the sine using the series
    printf("The value of the series is %f", sum);
}