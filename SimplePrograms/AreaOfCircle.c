#include <stdio.h>   // Preprocessor directive to include the Standard Input/Output library for functions like printf() and scanf()

// The main function where the program execution starts
void main() {
    // Declare float variables to store the radius and the calculated area of the circle
    float radius, area;

    // Prompt the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");

    // Read the radius as a float from the user and store it in the 'radius' variable
    scanf("%f", &radius);

    // Calculate the area of the circle using the formula: π * radius^2
    // Using 3.14 as the approximation for π (pi)
    area = radius * radius * 3.14;

    // Print the calculated area of the circle
    printf("The area of the circle is %f", area);
}