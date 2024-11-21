// Convert years into days and months 

#include<stdio.h>
void main(){
    float year,days,month;
    
    printf("Enter year:");
    scanf("%f", &year);

    days = year*365;
    printf("Days is : %f\n",days);

    month = year*12;
    printf("Month is : %f\n",month);
}