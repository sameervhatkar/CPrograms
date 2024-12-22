/*
    Program to perform arithmetic operations based on user choice.
    The program displays a menu to the user to choose one of the following operations:
    - Addition
    - Subtraction
    - Multiplication
    - Division
    - Modulus
    
    After the user selects an operation, it takes two numbers as input and displays the result.

    Example output for n = 2 and operation choice 3 (multiplication):
    
    Enter first number: 5
    Enter second number: 3
    The result of multiplication is 15
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int num1, num2, choice, result;  // Declare variables for two numbers, choice, and result

    // Display the menu to the user
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);  // Take the user's choice

    // Take two numbers as input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform the operation based on user's choice
    switch(choice) {
        case 1:
            result = num1 + num2;  // Addition
            printf("The result of addition is: %d\n", result);
            break;
        case 2:
            result = num1 - num2;  // Subtraction
            printf("The result of subtraction is: %d\n", result);
            break;
        case 3:
            result = num1 * num2;  // Multiplication
            printf("The result of multiplication is: %d\n", result);
            break;
        case 4:
            if(num2 != 0) {  // Check for division by zero
                float division_result = (float)num1 / num2;  // Division
                printf("The result of division is: %.2f\n", division_result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case 5:
            if(num2 != 0) {  // Check for modulus by zero
                result = num1 % num2;  // Modulus
                printf("The result of modulus is: %d\n", result);
            } else {
                printf("Error! Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a valid operation (1-5).\n");
            break;
    }
}