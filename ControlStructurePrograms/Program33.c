/*
    Program to check if a given number is divisible by 10.
    The program takes an integer input and checks whether it is divisible by 10 using the modulo operation.
    
    Example Output for n = 30:
    
    Enter a number: 30
    The number is divisible by 10.
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int n;  // Declare a variable to store the number

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);  // Read the integer input from the user

    // Check if the number is divisible by 10 using the modulo operator
    if(n % 10 == 0) {  // If the remainder when divided by 10 is 0, the number is divisible by 10
        printf("The number is divisible by 10.");
    }
    else {  // If the remainder is not 0, the number is not divisible by 10
        printf("The number is not divisible by 10.");
    }
}