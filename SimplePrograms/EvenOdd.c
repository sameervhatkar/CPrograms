#include <stdio.h>   // Include the Standard Input/Output library for functions like printf() and scanf()

// The main function where the program execution starts
void main() {
    // Declare an integer variable 'a' to store the user input
    int a;

    // Prompt the user to enter a number
    printf("Enter a number: ");

    // Read the integer input from the user and store it in 'a'
    scanf("%d", &a);

    // Check if the number is even or odd
    (a % 2 == 0) ? printf("The number is even") : printf("The number is odd");
}