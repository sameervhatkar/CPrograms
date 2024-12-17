#include <stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int a;       // Declare an integer variable 'a'
    float b;     // Declare a float variable 'b'

    // Prompt the user to enter an integer and a float
    printf("Enter the integer data and then the float data: ");

    // Read an integer and a float value from the user
    scanf("%d %f", &a, &b);

    // Calculate the product of 'a' and 'b' and display it with 2 decimal precision
    printf("The product of 2 numbers is %.2f", a * b);
}