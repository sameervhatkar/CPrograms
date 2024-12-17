#include <stdio.h>   // Include the Standard Input/Output library for functions like printf() and scanf()

// The main function where the program execution starts
void main() {
    // Declare four integer variables to store the three numbers and the greatest number
    int a, b, c, greater;

    // Prompt the user to enter three numbers
    printf("Enter 3 numbers: ");

    // Read the three integer inputs from the user and store them in 'a', 'b', and 'c'
    scanf("%d %d %d", &a, &b, &c);

    // Use nested ternary operators to determine the greatest number
    greater = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Print the greatest value along with the input numbers
    printf("The greater value among %d, %d and %d is %d", a, b, c, greater);
}

/*
    the greater value among 2 and 3 is 3*/
