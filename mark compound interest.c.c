//PROGRAM TO CALCULATE COMPOUBD INTEREST
#include <stdio.h>
#include <math.h>
int main() 
{
    float principle, rate, time, compound_interest, amount;
    int n; 
    printf("Enter the principal amount (Ksh): \n");
    scanf("%f", &principle);
    printf("Enter the rate (%%): \n");
    scanf("%f", &rate);
    printf("Enter time in years:\n ");
    scanf("%f", &time);
    printf("Number of times compounded yearly:\n ");
    scanf("%d", &n);
    compound_interest = principle * pow((1 + rate / (100 * n)), (n * time));
    printf("Compound Interest: Ksh %.2f\n", compound_interest);
    return 0;
}
