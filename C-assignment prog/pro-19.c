// Calculate compound interest 

#include<stdio.h>
int main(){
    float P,R,T,amount,compound_interest;
    printf("Enter p amount:");
    scanf("%f",&P);

    printf("Enter r amount:");
    scanf("%f",&R);

    printf("Enter Time in years:");
    scanf("%f",&T);

    amount=P*(1+R/100)*T;
    printf("Amount = %f\n",amount);

    compound_interest = amount - P;
    printf("Compund Interest = %.2f\n",compound_interest);

    return 0;
}