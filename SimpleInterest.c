#include <stdio.h>   // Preprocessor directive to include the Standard Input/Output library for functions like printf() and scanf()

// The main function where the program execution starts
void main() {
    // Declare float variables to store principal amount, rate of interest, number of years, and the calculated simple interest
    float rateOfInterest, principalAmount, noOfYears, simpleInterest;

    // Prompt the user to enter the principal amount, rate of interest, and number of years
    printf("Enter the principal amount, rate of interest and no of years: ");

    // Read three float values from the user and store them in the respective variables
    scanf("%f %f %f", &principalAmount, &rateOfInterest, &noOfYears);

    // Calculate the simple interest using the formula: (Principal * Rate * Time) / 100
    simpleInterest = (principalAmount * rateOfInterest * noOfYears) / 100;

    // Print the calculated simple interest, formatted to two decimal places
    printf("The simple interest is %.2f", simpleInterest);
}