#include<stdio.h>
void main() {
    float rateOfInterest, principalAmount, noOfYears, simpleInterest;
    printf("Enter the principal amount, rate of interest and no of years: ");
    scanf("%f %f %f", &principalAmount, &rateOfInterest, &noOfYears);
    simpleInterest = (principalAmount * rateOfInterest * noOfYears)/100;
    printf("The simple interest is %.2f", simpleInterest);
}

/*WAP to accept the basic salary from the keyboard. 
Calculate the gross salary that includes basic salary, 50% DA and 40%HRA
HRA = 40 x basic /100
    DA = 50 x basic /100 */
