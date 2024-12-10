#include<stdio.h>
void main() {
    float f, c;
    printf("Enter the the temperature in fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32)/1.8;
    printf("The temperature in degree celsius is  %f", c);
}