#include<stdio.h>
void main() {
    int a, b, c, greater;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    greater = (a>b)?((a>c)?a : c):((b>c)?b:c);
    printf("The greater value among %d, %d and %d is %d", a, b, c, greater);
}

/*
    the greater value among 2 and 3 is 3*/
