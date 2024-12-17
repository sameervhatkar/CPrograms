#include<stdio.h>
void main() {
    int a, b, temp;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("The value of a is %d and b is %d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nThe swapped value of a is %d and b is %d", a, b);
}