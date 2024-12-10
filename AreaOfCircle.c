#include<stdio.h>
void main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = radius * radius * 3.14;
    printf("The area of the circle is %f", area);
}