//  Calculate compound interest (Compound Interest formula: 
// a. Formula to calculate compound interest annually is given by: 
// Amount= P(1 + R/100)t 
// b. Compound Interest = Amount – P 

#include<stdio.h>
int main(){
    float P,R,T,amount,compound_interest;
    printf("Enter p amount:");
    scanf("%f",&P);

    printf("Enter r amount:");
    scanf("%f",&R);

    printf("Enter time in years:");
    scanf("%f",&T);

    amount=P*(1+R/100)*T;
    printf("Amount = %f\n",amount);

    compound_interest = amount - P;
    printf("Compund Interest = %.2f\n",compound_interest);

    return 0;
}