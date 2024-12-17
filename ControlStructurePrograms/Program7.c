/*  
    Write a program to generate and print the Fibonacci series up to 'n' terms using a loop.
*/

#include <stdio.h>  // Include the Standard Input/Output library for printf() and scanf()

void main() {
    int a = 0, b = 1, c;  // 'a' and 'b' are the first two terms of the Fibonacci series
    int i, n;             // 'i' is the loop counter, 'n' is the number of terms to be printed

    // Prompt the user to enter the number of terms
    printf("Enter a number: ");

    // Read the user input and store it in 'n'
    scanf("%d", &n);

    // Print the first two terms of the Fibonacci series
    printf("Fibonacci Series\n");
    printf("%d\n", a);  // Print the first term (0)
    printf("%d\n", b);  // Print the second term (1)

    // Start a for loop to generate the remaining terms of the Fibonacci series
    for (int i = 1; i <= n - 2; i++) {
        c = a + b;       // Calculate the next term by adding the previous two terms
        printf("%d\n", c);  // Print the current term 'c'
        a = b;           // Update 'a' to the value of 'b'
        b = c;           // Update 'b' to the value of 'c'
    }
}