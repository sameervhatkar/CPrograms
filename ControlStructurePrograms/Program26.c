/*
    Program to print numbers from 1 to n using a do-while loop.
    The program takes an integer input `n` from the user and prints
    all numbers from 1 to `n`, each on a new line.
    
    Example Output for n = 5:
    
    Enter the value of n: 5
    1
    2
    3
    4
    5
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int i, n;  // Declare variables: i for iteration, n for the user input number

    // Prompt the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);  // Read the value of n from the user input

    // Initialize the loop variable
    i = 1;

    // Start a do-while loop to print numbers from 1 to n
    do {
        printf("%d\n", i);  // Print the current value of i
        i++;  // Increment the loop variable
    } while(i <= n);  // Continue looping as long as i is less than or equal to n
}