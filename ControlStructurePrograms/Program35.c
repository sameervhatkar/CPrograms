/*
    Program to check whether a given number is a prime number or not.
    A prime number is a number greater than 1 that has no divisors other than 1 and itself.
    
    Example Output for n = 7:
    
    Enter a number: 7
    Prime number.
    
    Example Output for n = 10:
    
    Enter a number: 10
    Not a prime number.
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int i = 2, n;  // Declare variables: i for loop iteration, n for the number input by the user

    // Prompt the user to input a number
    printf("Enter a number: ");
    scanf("%d", &n);  // Read the number (n) from the user input

    // Loop to check if n is divisible by any number starting from 2 up to n-1
    while(n % i != 0) {  // Check divisibility of n by i
        i++;  // Increment i to check the next number
    }

    // If i equals n, then n is prime as it is not divisible by any number except 1 and itself
    if(n == i) {
        printf("Prime number.");  // Print "Prime number." if n is prime
    }
    else {
        printf("Not a prime number");  // Print "Not a prime number" if n is divisible by some other number
    }
}