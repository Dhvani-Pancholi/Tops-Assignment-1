// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>
void main()
{
    int number,r;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        r = number % 10;
        printf("%d",r);
        number = number / 10;

    }
    
}