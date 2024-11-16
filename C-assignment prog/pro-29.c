// Convert minutes into seconds and hours

#include<stdio.h>
void main(){
    float min,sec,hours;
    
    printf("Enter Mintune:");
    scanf("%f", &min);

    sec = min*60;
    printf("Second is : %.2f\n",sec);

    hours = min/60;
    printf("Hours is : %.2f\n",hours);
}