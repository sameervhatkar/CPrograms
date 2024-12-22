/*
    Program to determine the grade based on marks scored.
    The program categorizes the marks into different classes.
    
    Example Output for marks = 75:
    
    Enter the marks scored(0-100): 75
    Distinction
*/

#include<stdio.h>  // Include the standard input/output library

void main() {
    int marks;  // Declare a variable to store the marks

    // Prompt the user to enter the marks scored
    printf("Enter the marks scored(0-100): ");
    
    // Use scanf to get the marks as input. Note the '&' before marks to pass the address of the variable
    scanf("%d", &marks);  

    // Check the conditions for different grades
    if(marks >= 70) {  // If marks are 70 or above
        printf("Distinction");
    }
    else {  // If marks are less than 70, check for other grades
        if(marks >= 60) {  // If marks are 60 or above but less than 70
            printf("First Class");
        }
        else {  // If marks are less than 60, check for other grades
            if(marks >= 50) {  // If marks are 50 or above but less than 60
                printf("Second Class");
            }
            else {  // If marks are less than 50, check for pass or fail
                if(marks >= 40) {  // If marks are 40 or above but less than 50
                    printf("Pass Class");
                }
                else {  // If marks are below 40, the student fails
                    printf("Fail");
                }
            }
        }
    }
}