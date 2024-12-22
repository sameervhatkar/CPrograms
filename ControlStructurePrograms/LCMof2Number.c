/*
    Program to find the Least Common Multiple (LCM) of two numbers.
    The program finds the LCM by incrementing the larger number 
    until both numbers divide it evenly.
*/

#include<stdio.h>  // Include standard input/output library

void main() {
    int num1, num2, lcm;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the larger of the two numbers
    if(num1 < num2) {
        lcm = num2;  // Set lcm to the larger number
    }
    else {
        lcm = num1;  // Set lcm to the larger number
    }

    // Increment lcm until both num1 and num2 divide it evenly
    while(lcm % num1 != 0 || lcm % num2 != 0) {
        lcm++;  // Increase lcm by 1
    }

    // Print the LCM of the two numbers
    printf("LCM is %d\n", lcm);
}