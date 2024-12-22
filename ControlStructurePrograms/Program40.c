/*
    Program to print the factors of a given number.
    A factor of a number is a number that divides the given number exactly without leaving a remainder.
    
    Example Output for n = 12:
    
    Enter a number: 12
    Factors are: 
    2
    3
    4
    6
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int n, i;  // Declare variables n for the number and i for iteration
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);  // Read the number from the user input
    
    // Print the header for the factors
    printf("Factors are: \n");
    
    // Initialize i to 2, as 1 is always a factor of any number and we start checking from 2
    i = 2;
    
    // Use a while loop to check each number from 2 to n-1
    while(i < n) {  // Continue until i is less than n
        if(n % i == 0) {  // Check if i divides n exactly (i.e., no remainder)
            printf("%d\n", i);  // If i is a factor, print it
        }
        i++;  // Increment i to check the next number
    }
}