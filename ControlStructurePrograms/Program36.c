/*
    Program to print the first 'n' prime numbers.
    A prime number is a number greater than 1 that is only divisible by 1 and itself.

    Example Output for n = 5:

    Enter a number: 5
    The following are 5 prime numbers
    2
    3
    5
    7
    11
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int i, n, x = 1;  // Declare variables: i for checking divisibility, n for the number of primes, x for the current number being checked
    printf("Enter a number: ");
    scanf("%d", &n);  // Read the number of prime numbers to print

    // Display message indicating how many prime numbers are going to be printed
    printf("The following are %d prime numbers\n", n);  

    // Loop to find and print the first 'n' prime numbers
    while(n != 0) {  // Loop will run until we've found 'n' prime numbers
        x++;  // Increment x to check the next number
        i = 2;  // Start checking divisibility from 2

        // Inner loop to check if 'x' is divisible by any number between 2 and x-1
        while(x % i != 0) {  // If x is not divisible by i, keep increasing i
            i++;
        }

        // If x equals i, then it is prime (since it's only divisible by 1 and itself)
        if(x == i) {
            printf("%d\n", x);  // Print the prime number
            n--;  // Decrease the counter of remaining prime numbers to print
        }
    }
}