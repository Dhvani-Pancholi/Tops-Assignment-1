// Convert days into months 

#include<stdio.h>
void main(){
    int days,month;
    
    printf("Enter days:");
    scanf("%d", &days);

    month = days/30;
    printf("Days divided by month is : %d\n",month);
}