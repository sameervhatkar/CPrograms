//Try to find the output by yourself

#include <stdio.h>   // Include the Standard Input/Output library

void main() {
    int k = 3, l = 4, m;

    // First calculation: Pre-increment k, Post-decrement l
    m = ++k + l--;  
    printf("Value of m: %d\n", m);

    // Second calculation: Post-increment k, Pre-decrement l
    m = k++ + --l;
    printf("Value of m: %d\n", m);
}