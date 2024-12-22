/*
    Program to count the number of digits before and after the decimal point in a floating-point number.
    The program takes a floating-point number as input and counts the digits before and after the decimal point.
    
    Example Output for x = 123.456:
    
    Enter the number: 123.456
    Number of digits before decimal point = 3
    Number of digits after decimal point = 3
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int n, countBefore = 0, countAfter = 0;  // Declare variables: n for integer part, countBefore for digits before decimal, countAfter for digits after decimal
    float x;  // Declare float variable x to store the user input

    // Prompt the user to enter a floating-point number
    printf("Enter the number: ");
    scanf("%f", &x);  // Read the floating-point number from the user input

    // Separate the integer part from the decimal part
    n = (int)x;    // Extract the integer part of x by casting it to int
    x = x - n;     // Calculate the decimal part by subtracting the integer part from x

    // Count the number of digits before the decimal point
    while(n != 0) {
        n = n / 10;   // Remove the last digit of the integer part
        countBefore++; // Increment the count for each digit removed
    }

    // Count the number of digits after the decimal point
    while(x != 0) {
        x = x * 10;    // Shift the decimal part to the left by multiplying by 10
        n = (int)x;    // Get the integer part of the shifted decimal value
        x = x - n;     // Subtract the integer part from the shifted value to get the new decimal part
        countAfter++;   // Increment the count for each digit in the decimal part
    }

    // Print the results: the number of digits before and after the decimal point
    printf("Number of digits before decimal point = %d\n", countBefore);
    printf("Number of digits after decimal point = %d", countAfter);
}

