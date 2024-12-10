#include<stdio.h>
void main() {
    int a;
    float b;
    printf("Enter the integer data and then the float data: ");
    scanf("%d %f",&a, &b);
    printf("The product of 2 numbers is %.2f", a*b);
}