#include<stdio.h>
void main() {
    int n, total = 0;

    // Label for 'goto'
    again:
    printf("Enter a number: ");
    scanf("%d", &n);

    // Adding the entered number to the total
    total = total + n;
    
    // If total is less than 100, repeat the process
    if(total < 100) {
        goto again;  // Go back to the 'again' label
    }

    // Once total reaches 100 or more, print the final value
    printf("Total = %d\n", total);
}