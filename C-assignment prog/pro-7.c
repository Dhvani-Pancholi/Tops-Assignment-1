//  Find area of Rectangle Formula : A=wl

#include <stdio.h>

void main()
{
    float w, l;

    printf("Enter the value of W : ");
    scanf("%f", &w);

    printf("Enter the value of L: ");
    scanf("%f", &l);

    float area = w * l;

    printf("The area of the rectangle is: %.2f\n", area);
}
