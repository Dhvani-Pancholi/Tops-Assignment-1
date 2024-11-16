// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include <stdio.h>
void main()
{
    int n, first_digit = 0, last_digit = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    last_digit = n % 10;

    while (n>10)
    {
        n = n/10;
    }
    
    first_digit = n;
    sum = first_digit + last_digit;
    printf("Sum of first and last digit is: %d", sum);
}
