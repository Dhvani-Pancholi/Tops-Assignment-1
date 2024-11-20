// Find circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>

void main() {
    float a,b,c;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);

    float circumference;

    circumference = a + b + c;
    printf("The circumference of the triangle is: %.2f\n",circumference);

}
