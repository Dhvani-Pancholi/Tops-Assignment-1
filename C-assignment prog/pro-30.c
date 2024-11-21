// WAP to convert years into days and days into years

#include<stdio.h>
void main(){
    float year,days;
    
    printf("Enter year:");
    scanf("%f", &year);

    days = year*365;
    printf("Days is : %f\n",days);

    printf("Enter days:");
    scanf("%f", &days);

    year = days/365;
    printf("years is : %f\n",year);
}
