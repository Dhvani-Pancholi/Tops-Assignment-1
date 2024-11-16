// WAP to convert years into days and days into years

#include<stdio.h>
void main(){
    int year,days;
    
    printf("Enter year:");
    scanf("%d", &year);

    days = year*365;
    printf("Days is : %d\n",days);

    printf("Enter days:");
    scanf("%d", &days);

    year = days/365;
    printf("years is : %d\n",year);
}
