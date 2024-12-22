/*
    Program to display the user-entered single-digit number in words using a switch case.
    The program takes a number from 0 to 9 and prints it in word format.
    
    Example Output for input: 5:
    
    Enter a single-digit number: 5
    The number in words is: Five
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int num;  // Declare a variable to store the number

    // Prompt the user to enter a single-digit number
    printf("Enter a single-digit number: ");
    
    // Read the number from the user
    scanf("%d", &num);  

    // Use a switch statement to display the number in words
    switch(num) {
        case 0:
            printf("The number in words is: Zero");
            break;
        case 1:
            printf("The number in words is: One");
            break;
        case 2:
            printf("The number in words is: Two");
            break;
        case 3:
            printf("The number in words is: Three");
            break;
        case 4:
            printf("The number in words is: Four");
            break;
        case 5:
            printf("The number in words is: Five");
            break;
        case 6:
            printf("The number in words is: Six");
            break;
        case 7:
            printf("The number in words is: Seven");
            break;
        case 8:
            printf("The number in words is: Eight");
            break;
        case 9:
            printf("The number in words is: Nine");
            break;
        default:
            printf("Invalid input! Please enter a single-digit number.");
    }
}