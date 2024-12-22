/*
    Program to check whether a given year is a leap year or not.
    A leap year occurs if:
    - The year is divisible by 4, but not by 100, or
    - The year is divisible by 400.
    
    Example Output for year = 2024:
    
    Enter a year: 2024
    Leap year
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int year;  // Declare a variable to store the year
    
    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);  // Read the year from the user input
    
    // Check if the year is a leap year
    if((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) {
        printf("Leap year");  // Print "Leap year" if the condition is satisfied
    }
    else {
        printf("Not a Leap year");  // Print "Not a Leap year" if the condition is not satisfied
    }
}