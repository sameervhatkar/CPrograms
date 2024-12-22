/*
    Program to print the first 10 numbers that are divisible by both 5 and 8.
    The program uses a while loop to find numbers divisible by both 5 and 8 and prints them until 10 such numbers are found.
    
    Example Output:
    
    40
    80
    120
    160
    200
    240
    280
    320
    360
    400
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int i = 0, n = 1;  // Initialize variables: i for counting numbers and n for checking divisibility

    // While loop to keep checking until 10 numbers are found
    while(i < 10) {  // This loop continues until i reaches 10
        // Check if n is divisible by both 5 and 8 using the modulo operator
        if(n % 5 == 0 && n % 8 == 0) {  // If the remainder when divided by 5 and 8 is 0, n is divisible by both
            printf("%d\n", n);  // Print the current value of n
            i++;  // Increment the counter i to keep track of how many numbers have been found
        }
        n++;  // Increment n to check the next number in the next iteration
    }
}