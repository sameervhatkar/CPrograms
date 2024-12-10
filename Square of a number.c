#include<stdio.h>    // Preprocessor directive to include the Standard Input/Output library for functions like printf() and scanf()

// The main function where the program execution starts
void main() {
    int n;           // Declaration of an integer variable 'n' to store the user input

    // Prompt the user to enter a number
    printf("Enter a number: ");

    // Read an integer from the user and store it in the variable 'n'
    scanf("%d", &n);

    // Declare and initialize an integer variable 'x' to store the square of 'n'
    int x = n * n;

    // Print the square of the entered number
    printf("%d", x);
}