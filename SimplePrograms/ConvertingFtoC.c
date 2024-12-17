#include <stdio.h>    // Preprocessor directive to include the Standard Input/Output library for functions like printf() and scanf()

// The main function where the program execution starts
void main() {
    // Declare float variables to store the temperature in Fahrenheit and Celsius
    float f, c;

    // Prompt the user to enter the temperature in Fahrenheit
    printf("Enter the temperature in Fahrenheit: ");

    // Read the temperature in Fahrenheit from the user and store it in the 'f' variable
    scanf("%f", &f);

    // Convert the Fahrenheit temperature to Celsius using the formula: (F - 32) / 1.8
    c = (f - 32) / 1.8;

    // Print the converted temperature in Celsius
    printf("The temperature in degree Celsius is %f", c);
}