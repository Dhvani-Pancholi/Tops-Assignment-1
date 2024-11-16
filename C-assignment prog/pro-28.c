// Convert years into days and months 

#include<stdio.h>
void main(){
    int year,days,month;
    
    printf("Enter year:");
    scanf("%d", &year);

    days = year*365;
    printf("Days is : %d\n",days);

    month = year*12;
    printf("Month is : %d\n",month);
}