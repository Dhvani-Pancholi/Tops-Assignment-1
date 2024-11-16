// WAP to find the largest of three numbers

#include <stdio.h>
void main()
{
    float a, b, c;
    printf("Enter three number: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("the largest number is %f", a);
    }
    else if (b > a && b > c)
    {
        printf("the largest number %f", b);
    }
    else
    {
        printf("the largest number %f", c);
    }
}
