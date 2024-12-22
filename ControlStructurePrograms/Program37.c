/*
    Program to check if a given number is an Armstrong number.
    An Armstrong number is a number that is equal to the sum of the cubes of its digits.
    
    Example Output for 153:
    
    Enter a number: 153
    Armstrong Number.
    
    Example Output for 123:
    
    Enter a number: 123
    Not a Armstrong number.
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int sum = 0, digit, x, copy;  // Declare variables: sum for the sum of cubes, digit for storing each digit, x for the number to check, copy for storing the original number
    printf("Enter a number: ");
    scanf("%d", &x);  // Read the number to check if it's an Armstrong number
    copy = x;  // Store the original number in 'copy' for later comparison

    // Loop through the digits of the number
    while(x != 0) {
        digit = x % 10;  // Get the last digit of x
        sum = sum + digit * digit * digit;  // Add the cube of the digit to sum
        x = x / 10;  // Remove the last digit from x
    }

    // Check if the sum of cubes of digits is equal to the original number
    if(sum == copy) {
        printf("Armstrong Number.");  // If the sum is equal to the original number, print that it is an Armstrong number
    }
    else {
        printf("Not an Armstrong number.");  // If the sum is not equal to the original number, print that it is not an Armstrong number
    }
}