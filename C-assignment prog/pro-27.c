// Convert days into months 

#include<stdio.h>
void main(){
    float days;
    float month;
    
    printf("Enter days: ");
    scanf("%f", &days);

    month = days / 30.0;
    printf("Days divided by month is: %.2f\n", month);
}