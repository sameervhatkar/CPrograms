/*
    Program to print the first 'n' Armstrong numbers greater than 99.
    An Armstrong number is a number that is equal to the sum of the cubes of its digits.
    
    Example Output for n = 3:
    
    Enter a number: 3
    The list of 3 Armstrong numbers is given below:
    153
    370
    371
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int sum, digit, x = 99, copy, n;  // Declare variables: sum for the sum of cubes, digit for each digit, x as a counter starting from 99, copy for storing the original value, and n for the number of Armstrong numbers to print
    printf("Enter a number: ");
    scanf("%d", &n);  // Read the number of Armstrong numbers to print from the user input
    printf("The list of %d Armstrong numbers is given below\n", n);

    // Loop to find and print the Armstrong numbers
    while(n != 0) {
        x++;  // Increment x to check the next number
        copy = x;  // Store the current number in copy for later comparison
        sum = 0;  // Reset the sum for the new number

        // Loop through each digit of x and calculate the sum of the cubes of its digits
        while(x != 0) {
            digit = x % 10;  // Get the last digit of x
            sum = sum + digit * digit * digit;  // Add the cube of the digit to the sum
            x = x / 10;  // Remove the last digit from x
        }

        // If the sum of cubes of digits is equal to the original number, it is an Armstrong number
        if(sum == copy) {
            printf("%d\n", copy);  // Print the Armstrong number
            n--;  // Decrease the count of Armstrong numbers to print
        }

        x = copy;  // Restore the original value of x to check the next number
    } 
}