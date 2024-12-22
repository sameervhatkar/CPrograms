/*
    Program to perform arithmetic operations based on the user's choice using arithmetic signs.
    The user will enter the operation symbol (+, -, *, /), and two numbers are provided to perform the chosen operation.

    Example output:
    
    Enter first number: 10
    Enter second number: 5
    Enter operation (+, -, *, /): +
    The result of addition is: 15
*/

#include <stdio.h>  // Include the standard input/output library

void main() {
    float num1, num2, result;  // Declare variables for two numbers and the result
    char operator;  // Declare a variable to hold the operator

    // Display the menu to the user
    printf("Enter first number: ");
    scanf("%f", &num1);  // Take the first number as input
    printf("Enter second number: ");
    scanf("%f", &num2);  // Take the second number as input
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operator);  // Take the operator as input

    // Perform the operation based on the user's choice
    switch (operator) {
        case '+':
            result = num1 + num2;  // Addition
            printf("The result of addition is: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;  // Subtraction
            printf("The result of subtraction is: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;  // Multiplication
            printf("The result of multiplication is: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {  // Check for division by zero
                result = num1 / num2;  // Division
                printf("The result of division is: %.2f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please enter a valid operator (+, -, *, /).\n");
            break;
    }
}