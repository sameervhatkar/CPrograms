/*
    Program to demonstrate the use of the 'continue' statement.
    The program prints numbers from 1 to 10 but skips the number 5.
*/

#include<stdio.h>  // Include standard input/output library

void main() {
    int i;

    // Loop through numbers from 1 to 10
    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            continue;  // Skip the current iteration when i is 5
        }
        printf("%d ", i);  // Print the number if it's not 5
    }

    printf("\n");  // Print a newline after the loop
}