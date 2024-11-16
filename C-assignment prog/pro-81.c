// C Program to Reverse a Number Using FOR Loop Series Program:

#include <stdio.h>
void main()
{
    int number, r, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 0; i < number; i++)
    {
        r = number % 10;
        printf("%d", r);
        number = number / 10;
    }
}