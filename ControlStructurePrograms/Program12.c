/*
    Program to Print a Pattern with Nested Loops
    This program prints "Hii" twice on each of 5 lines using nested loops.
*/

#include <stdio.h>  // Include the standard input/output library for printf()

void main() {
    // Outer loop to handle the number of lines (5 lines)
    for (int i = 1; i <= 5; i++) {

        // Inner loop to print "Hii" twice on each line
        for (int j = 1; j <= 2; j++) {
            printf("Hii ");  // Print "Hii" followed by a space
        }

        printf("\n");  // After printing "Hii" twice, move to the next line
    }
}