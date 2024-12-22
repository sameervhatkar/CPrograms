/*
    Program to sum entered numbers and break if a number greater than 99 is entered.
    The program will stop taking input once a number greater than 99 is entered and display the total sum.
*/

#include<stdio.h>  // Include standard input/output library

void main() {
    int n, total = 0, i;  // Declare variables: n for user input, total for the sum, i for loop iteration

    // Loop to ask for 10 numbers
    for(i = 1; i <= 10; i++) {
        printf("Enter a number: ");  // Prompt user to enter a number
        scanf("%d", &n);  // Read the user input and store it in variable 'n'

        // If the user enters a number greater than 99, break the loop
        if(n > 99) {
            break;  // Exit the loop if the entered number is greater than 99
        }

        total = total + n;  // Add the entered number to the total
    }

    // Print the total of all entered numbers
    printf("Total = %d\n", total);  // Display the total sum after the loop ends
}