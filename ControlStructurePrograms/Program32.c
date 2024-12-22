/*
    Program to convert a given integer to its binary form (16-bit representation).
    The program takes an integer input and prints its binary representation using a bitwise method.

    Example Output for n = 5:
    
    Enter the number: 5
    Binary form is 0000000000000101
*/

#include<stdio.h>  // Include the standard input/output library
#include<math.h>    // Include the math library for the power function

void main() {
    int n, i;  // Declare variables: n for the input number, i for loop index

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &n);  // Read the input number from the user

    // Print the message indicating the binary form
    printf("Binary form is ");

    // Loop to calculate and print the binary representation bit by bit from highest (bit 15) to lowest (bit 0)
    for(int i = 15; i >= 0; i--) {
        // Print the bit corresponding to the current position using division and modulus operation
        printf("%d", n / (int)pow(2, i));  // This calculates the bit (either 0 or 1) at the i-th position

        // Update n to remove the contribution of the i-th bit
        n = n % (int)(pow(2, i));  // Remove the i-th bit by applying the modulus operator
    }
}