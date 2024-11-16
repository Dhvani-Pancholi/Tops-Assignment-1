// Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>

void main(){
    float b,h,area;
    printf("Enter base of Triangle : ");
    scanf("%f",&b);
    printf("Enter height of Triangle : ");
    scanf("%f",&h);

    area = 0.5*b*h;
    printf("Area of tringle is: %.2f",area);
   
}

