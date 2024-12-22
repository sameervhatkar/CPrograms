/*
    Program to display the user-entered number in words, where each digit is represented in words.
    The program takes a number from the user and prints the corresponding word for each digit.
    
    Example Output for input: 513:
    
    Enter a number: 513
    The number in words is: five one three
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int num;  // Declare a variable to store the number
    printf("Enter a number: ");
    scanf("%d", &num);  // Read the number from the user

    printf("The number in words is: ");

    // Check if the number is 0, handle it separately since we need to print a word
    if (num == 0) {
        printf("zero");
    } else {
        // Loop through each digit of the number
        while (num != 0) {
            int digit = num % 10;  // Get the last digit of the number
            num = num / 10;  // Remove the last digit

            // Use a switch case to print the word for each digit
            switch(digit) {
                case 0:
                    printf("zero ");
                    break;
                case 1:
                    printf("one ");
                    break;
                case 2:
                    printf("two ");
                    break;
                case 3:
                    printf("three ");
                    break;
                case 4:
                    printf("four ");
                    break;
                case 5:
                    printf("five ");
                    break;
                case 6:
                    printf("six ");
                    break;
                case 7:
                    printf("seven ");
                    break;
                case 8:
                    printf("eight ");
                    break;
                case 9:
                    printf("nine ");
                    break;
                default:
                    printf("Invalid input ");
            }
        }
    }
}